#include<bits/stdc++.h>
using namespace std;
// Doubly ended queue : In which a lot of operations can be applied such as : push_front,push_back,pop_front,pop_back;

int main(){
deque<int> d;
d.push_front(19);
d.push_back(10);
while(!d.empty()){
    cout<<d.back()<<" ";
      d.pop_back();
}
cout<<d.empty()<<endl;
    return 0;
}


// Implementation of deque in form of array
// #include <bits/stdc++.h> 
// class Deque
// {
//     int *arr;
//     int front;
//     int rear;
//     int size;
// public:
//     // Initialize your data structure.
//     Deque(int n)
//     {
//         size=n;
//         front=-1;
//         rear=-1;
//         arr=new int[n];
//         // Write your code here.
//     }

//     // Pushes 'X' in the front of the deque. Returns true if it gets pushed into the deque, and false otherwise.
//     bool pushFront(int x)
//     {
//         if(isFull()){
//             return false;
//         }
//         else if(isEmpty())
//         front=rear=0;
//         else if(front==0&&rear!=size-1)front=size-1;
//         else front--;
//         arr[front]=x;
//         return true;
//         // Write your code here.
//     }

//     // Pushes 'X' in the back of the deque. Returns true if it gets pushed into the deque, and false otherwise.
//     bool pushRear(int x)
//     {
//         if(isFull()){
//             return false;
//         }
//         else if(isEmpty())
//         front=rear=0;
//         else if(rear==size-1&&front!=0)rear=0;
//         else rear++;
//         arr[rear]=x;
//         return true;
//         // Write your code here.
//     }

//     // Pops an element from the front of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
//     int popFront()
//     {
//         if(isEmpty())return -1;
//         int ans=arr[front];
//         arr[front]=-1;
//         if(front==rear)front=rear-1;
//         else if(front==size-1)front=0;
//         else front++;
//         return ans;
//         // Write your code here.
//     }

//     // Pops an element from the back of the deque. Returns -1 if the deque is empty, otherwise returns the popped element.
//     int popRear()
//     {
//           if(isEmpty())return -1;
//         int ans=arr[rear];
//         arr[rear]=-1;
//         if(front==rear)front=rear-1;
//         else if(rear==0)rear=size-1;
//         else rear--;
//         return ans;

//         // Write your code here.
//     }

//     // Returns the first element of the deque. If the deque is empty, it returns -1.
//     int getFront()
//     {
//         if(isEmpty())return -1;
//         else
//         return arr[front];

//         // Write your code here.
//     }

//     // Returns the last element of the deque. If the deque is empty, it returns -1.
//     int getRear()
//     {
//         if(isEmpty())return -1;
//         else
//         return arr[rear];
//         // Write your code here.
//     }

//     // Returns true if the deque is empty. Otherwise returns false.
//     bool isEmpty()
//     {
//         if(front==-1)return true;
//         else
//         return false;
//         // Write your code here.
//     }

//     // Returns true if the deque is full. Otherwise returns false.
//     bool isFull()
//     {
//         if((front==0&&rear==size-1)||(front!=0&&rear==(front-1)%(size-1)))return true;
//        else
//         return false;
//         // Write your code here.
//     }
// };
