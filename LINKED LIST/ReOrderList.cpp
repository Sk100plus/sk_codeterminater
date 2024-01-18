// You are given the head of a singly linked-list. The list can be represented as:

// L0 → L1 → … → Ln - 1 → Ln
// Reorder the list to be on the following form:

// L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
// You may not modify the values in the list's nodes. Only nodes themselves may be changed.



#include<bits/stdc++.h>
using namespace std;
class ListNode{
    public:
    int data;
    ListNode *next;
    ListNode(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insertF(ListNode* &head,int data){
ListNode* temp=new ListNode(data);
head->next=temp;
head=temp;
}
ListNode* Reorder(ListNode* &tail){
    int size=0;
    stack<ListNode* >st;
    ListNode* temp=tail;
    while(temp!=NULL){
        st.push(temp);
        temp=temp->next;
        size++;
    }
temp=tail;
for(int i=0;i<size/2;i++){
    ListNode* pre=temp->next;
    temp->next=st.top();
    st.pop();
    temp=temp->next;
    temp->next=pre;
    temp=pre;
}
temp->next=NULL;
return tail;
}
void print(ListNode* tail){
    ListNode* temp=tail;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    ListNode* temp=new ListNode(1);
    ListNode* tail=temp;
    ListNode* head=temp;
    insertF(head,2);
    insertF(head,3);
    insertF(head,4);
    insertF(head,5);
    print(tail);
    cout<<endl;
    ListNode* ans=Reorder(tail);
    print(ans);
    return 0;
}
