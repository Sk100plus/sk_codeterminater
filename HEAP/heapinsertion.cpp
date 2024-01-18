#include<bits/stdc++.h>
using namespace std;
class Heap{
        public:
    int arr[100];
    int size;
    Heap(){
            arr[0]=-1;
        size=0;
    }
    void insert(int value){
            size+=1;
            int index=size;
            arr[index]=value;
            while(index>1){
                int parent=index/2;
if(arr[parent]<arr[index]){
    swap(arr[index],arr[parent]);
        index=index/2;
}
else return;
            }
    }
    void print(){
        for(int i=1;i<=size;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    }
    void deletenode(){
        arr[1]=arr[size];
        size--;
        int i=1;
        while(2*i<=size){
            int val=max(arr[2*i],arr[2*i+1]);
            if(arr[i]<val){
                if(val==arr[2*i]){
                    swap(arr[i],arr[2*i]);
                    i=2*i;
                }
                else if(val==arr[2*i+1]){
                    swap(arr[i],arr[2*i+1]);
                    i=2*i+1;
                }
            }
            else return;

        }
    }

  
};
// MaxHeapify
  void MaxHeapify(vector<int> &arr,int n,int i){
int largest=i;
int left=2*i+1;
int right=2*i+2;
if(left<n && arr[largest]<arr[left]){
    largest=left;
}
if(right<n && arr[largest]<arr[right]){
    largest=right;
}
if(largest!=i){
    swap(arr[largest],arr[i]);
    MaxHeapify(arr,n,largest);
}
    }

     void MinHeapify(vector<int> &arr,int n,int i){
int smallest=i;
int left=2*i+1;
int right=2*i+2;
if(left<n && arr[smallest]<arr[left]){
    smallest=left;
}
if(right<n && arr[smallest]<arr[right]){
    smallest=right;
}
if(smallest!=i){
    swap(arr[smallest],arr[i]);
    MinHeapify(arr,n,smallest);
}
    }

    void HeapSort(vector<int> &vec){
int size=vec.size()-1;
        while(size>0){
            swap(vec[0],vec[size]);
            MaxHeapify(vec,size,0);
            size--;
        }
    }
int main(){
//     Heap h;
//     h.insert(1000);
//     h.insert(29);
//     h.insert(922);
//     h.insert(10);
//     h.insert(9);
//     h.insert(9292);
//     h.print();
//    h.deletenode();
//     h.print();
//     h.deletenode();
//     h.print();
   vector<int> arr1={54,53,50,56,55,234,4444};
int n=arr1.size();
for(int i=n/2-1;i>=0;i--){
MaxHeapify(arr1,n,i);
}
HeapSort(arr1);
for(int i=0;i<=n-1;i++)
cout<<arr1[i]<<" ";
    return 0;
}