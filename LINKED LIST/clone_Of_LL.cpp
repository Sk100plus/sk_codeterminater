
// HERE A LINKED LIST PRESENT WHERE ONE NODE ATTACH WITH OTHER 
// AND A RANDOM ATTACHMENT ALSO PRESENT AT EACH NODE.

// PROCESSION
// MAKE a new linked list a copy previous using there next property
// now make a unordered map for setting of random attachment.


// time complexity o(n) space complexity o(n)

// #include<iostream>
// #include<unordered_map>
// class Solution
// {
//     private:
//    void insertF(Node* &head,Node* & tail,int data){
//        Node* newN=new Node(data);
//        if(head==NULL){
//            head=newN;
//            tail=newN;
//            return;
//        }
//        else{
//        tail->next=newN;
//        tail=newN;
//        }
//    }
//     public:
//     Node *copyList(Node *head)
//     {
//        Node* CLhead=NULL;
//         Node* CLtail=NULL;
//         Node* temp=head;
//         while(temp!=NULL){
//             insertF(CLhead,CLtail,temp->data);
//             temp=temp->next;
//         }
//         unordered_map<Node*,Node*> mapp;
//         temp=head;
//         Node* old=CLhead;
//         while(temp!=NULL){
//             mapp[temp]=old;
//             temp=temp->next;
//             old=old->next;
//         }
//         temp=head;
//         old=CLhead;
//         while(temp!=NULL){
//             old->arb=mapp[temp->arb];
//             temp=temp->next;
//             old=old->next;
//         }
//         return CLhead;
//     }

// };
// int main(){
//     return 0;
// }