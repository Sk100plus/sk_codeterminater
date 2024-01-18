// Online C++ compiler to run C++ program online
#include <iostream>
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
void insertT(Node* &tail,int data){
    Node* temp=new Node(data);
    temp->next=tail;
    tail=temp;
}
void insertF(Node* &head,int data){
    Node* temp=new Node(data);
    head->next=temp;
    head=temp;
}
void sortL(Node* &tail){
    Node* temp=tail;
    int d;
    Node* temp1;
    while(temp->next!=NULL){
           temp1=temp->next;
        while(temp1!=NULL){
                    if(temp->data>temp1->data){
            d=temp->data;
            temp->data=temp1->data;
            temp1->data=d;
        }
        temp1=temp1->next;
        }
temp=temp->next;
    }
}
void print(Node* tail){
    Node* temp=tail;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main() {
    Node* tem=new Node(1);
   Node* tail=tem;
   Node* head=tem;
    insertF(head,0);
    insertF(head,2);
    insertF(head,1);
    insertF(head,0);
    insertT(tail,0);
    print(tail);
     cout<<head->data<<" "<<tail->data<<endl;
        sortL(tail);
            print(tail);
            cout<<head->data<<" "<<tail->data<<endl;
    return 0;
}