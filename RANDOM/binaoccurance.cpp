 #include<bits/stdc++.h>
using namespace std;
int binsearchfc(vector<int> arr,int size,int target){
    int s=0;
    int e=size-1;
    int fc=-1;
    
    while(s<=e){
        int mid=s+(e-s)/2;
        
        if(arr[mid]==target){
             fc=mid;
        
            e=mid-1;
        }else if(arr[mid]>target){
            e=mid-1;
        }else{
            s=mid+1;
        }
        
    }
    return fc;
}
 int binsearchlc(vector<int>  arr,int size,int target){
    int s=0;
    int e=size-1;
    int lc=-1;
    
    while(s<=e){
        int mid=s+(e-s)/2;
        
        if(arr[mid]==target){
             lc=mid;
        
            s=mid+1;
        }else if(arr[mid]>target){
            e=mid-1;
        }else{
            s=mid+1;
        }
        
    }
    return lc;
}
int main(){
        int t;
        cin>>t;
        vector<int> vec(t);
        
        for(int i=0;i<t;i++){
            cin>>vec[i];
        }
        int a;
        cin>>a;
        cout<<binsearchlc(vec,t,a)<<"  "<<binsearchfc(vec,t,a)<<endl;
    return 0;
}