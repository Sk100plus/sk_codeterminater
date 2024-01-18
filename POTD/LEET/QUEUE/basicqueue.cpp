
// #include <bits/stdc++.h> 
// class Queue {
//     // queue<int> q;
//    int *arr;
//    int qfront;
//    int rear;
//    int size;
// public:
//     Queue() {
//         // Implement the Constructor
// size=100001;
// arr=new int[size];
// qfront=0;
// rear=0;
//     }

//     /*----------------- Public Functions of Queue -----------------*/

//     bool isEmpty() {
//         // Implement the isEmpty() function
//     if(qfront==rear)return true;
//     return false;
//     }

//     void enqueue(int data) {
//         if(rear==size){
// cout<<"Queue is Full"<<endl;
//         }
        
//         else{
// arr[rear]=data;
// rear++;
//         }
//         // Implement the enqueue() function
       
//     }

//     int dequeue() {
//         // Implement the dequeue() function
//       if(qfront==rear)return -1;
//       else{
//           int ans=arr[qfront];
//           arr[qfront]=-1;
//           qfront++;
//           if(qfront==rear){
//               qfront=0;rear=0;
//           }
//           return ans;
//       }
//     }

//     int front() {
//         // Implement the front() function
//     if(qfront==rear) return -1;
//     else{
//        return arr[qfront];
//     }
//     }
// };


#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    q.push(9);
     q.push(90);
      q.push(91);
       q.push(92);
        q.push(93);
        cout<<q.back()<<endl; //ouput last Element.
        cout<<q.size()<<endl;
        cout<<q.empty()<<endl;
        while(!q.empty()){
            cout<<q.front()<<" ";
            q.pop();
        }
        cout<<endl;
         cout<<q.empty()<<endl;
    return 0;

}


