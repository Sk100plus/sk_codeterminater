// Given a linked list, you have to perform the following task:

// Extract the alternative nodes starting from second node.
// Reverse the extracted list.
// Append the extracted list at the end of the original list.
// Note: Try to solve the problem without using any extra memory.


//SOLUTION !
#include<bits/stdc++.h>
using namespace std;
 struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

class Solution
{
    public:
    Node* reverse( Node* temp){
         Node* prev=NULL;
        while(temp!=NULL){
            Node* tem=temp->next;
            temp->next=prev;
            prev=temp;
            temp=tem;
        }
        return prev;
    }
    void rearrange(struct Node *odd)
    {
        //add code here
         Node* temp1=odd;
         Node* temp2=odd->next;
         Node* value=odd->next;
        while(temp1->next&&temp2->next){
           temp1->next=temp2->next;
           temp1=temp2->next;
           temp2->next=temp1->next;
           temp2=temp1->next;
        }
        
        temp1->next=reverse(value);
    }
};
int main(){
    return 0;
}