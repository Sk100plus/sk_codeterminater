//  struct Node* reverse(struct Node* head)
//     {
//         if(head == NULL || head->next == NULL)
//         return head;
        
//         Node* prev = NULL;
        
//         while(head!=NULL)
//         {
//             Node* temp = head->next;
//             head->next = prev;
//             prev = head;
//             head = temp;
//         }
//         return prev;
//     }
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
Node* reverse(Node* head){
    Node* prev=NULL;
    while(head!=NULL){
        Node* temp=head->next;
        head->next=prev;
        prev=head;
        head=temp;
    }
}
void insertF(Node* &head,int data){
    Node* temp=new Node(data);
    head->next=temp;
    head=temp;
}
int main(){
    Node *head=new Node(1);
    Node* head1=head;

    return 0;
}