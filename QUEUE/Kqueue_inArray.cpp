#include<bits/stdc++.h>
using namespace std;
class kQueues{
    int n;int k;int *front;int *rear;
    int *arr;int freespot;int *next;
public:
kQueues(int n,int k){
this->n=n;
this->k=k;
front=new int[k];
rear=new int[k];
for(int i=0;i<k;i++){
    front[i]=-1;
    rear[i]=-1;
}

next=new int[n];
for(int i=0;i<n;i++){
    next[i]=i+1;
}
next[n-1]=-1;
arr=new int[n];
freespot=0;
}
void enqueue(int data,int qn){
    // overflow
    if(freespot==-1){
        cout<<"No empty space id present"<<endl;
        return;
    }
// find first free index
    int index=freespot;
    // update freespot
    freespot=next[index];
    // check whether first element
    if(front[qn-1]==-1){
        front[qn-1]=index;
    }
    else{
// Link new element to the prev element
next[rear[qn-1]]=index;
    }
    // Update next
    next[index]=-1;
    // Uodate rear
    rear[qn-1]=index;
    // push_element
    arr[index]=data;
}
int deqe(int qn){
    // underflow
    if(front[qn-1]==-1){
        cout<<"QUEUE UNDEFLOW"<<endl;
        return-1;
    }
    // find index to pop
    int index=front[qn-1];
    // front ko aage bdao
    front[qn-1]=next[index];
    // freeSlots ko manage karo
    next[index]=freespot;
    freespot=index;
return arr[index];
}
};
int main(){
kQueues q(10,3);
q.enqueue(10,1);
q.enqueue(9,2);
q.enqueue(10,3);
q.enqueue(91,2);q.enqueue(101,3);
q.enqueue(92,2);q.enqueue(103,1);
cout<<q.deqe(2)<<" "<<q.deqe(2)<<" "<<q.deqe(2);
// Array is just like as 10 |9|10|91|101|92|103  all attach with eachother all 2 attach eachother and all 3 are attach with eachother!
    return 0;
}