#include<bits/stdc++.h>
using namespace std;
class Node{
public:
int data;
Node* next;
Node(int d){
this->next=NULL;
this->data=d;
}
};
void insertF(Node* &head,int data){
    Node* temp=new Node(data);
    head->next=temp;
    head=temp;
}
void insertB(Node* &tail,int data){
Node* temp=new Node(data);
temp->next=tail;
tail=temp;
}
void print(Node* tail){
    Node* temp=tail;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void Madecir(Node* &tail,int position,Node* &head1){
    if(position==0){
head1->next=tail;
    }
    else{
Node* temp1=tail;
while(position!=0){
    temp1=temp1->next;
    position--;
}
head1->next=temp1;
    }
}
int FindCirpos(Node* &tail){
Node* slow=tail;
Node* fast=tail;
 fast=fast->next;
     while(fast!=slow){
          slow=slow->next;
        fast=fast->next->next;
     }
        fast=tail;
        while(fast!=slow){
              slow=slow->next;
            if(slow==fast)break;
            fast=fast->next;
        }
        Node* value=tail;
        int i=1;
        while(slow->next!=value->next){
            value=value->next;
            i++;
        }
        return i;
}
int FindCirPos1(Node* &tail){
     Node* slow=tail;
         Node* fast=tail;
fast=fast->next->next->next;
int len=FindCirpos(tail);
     while(len!=1){
          slow=slow->next;
    fast=fast->next->next->next;
    len--;
     }
     int m;
        while(fast!=slow){
            fast=fast->next;
            m++;
        }
        m++;
        fast=fast->next->next->next;
while(slow!=fast){
    slow=slow->next;
}
fast=tail;
while(slow!=fast){
    slow=slow->next;fast=fast->next;
}
return slow->data;
}
bool IsCircular(Node* tail){
    if(tail->next==NULL||tail==NULL)return 1;
     Node* slow=tail;
     Node* fast=tail;
     fast=fast->next;
     while(fast!=NULL||fast->next!=NULL){
          if(fast==slow)return 1;
          if(fast==NULL||fast->next==NULL)return 0;
          slow=slow->next;
        fast=fast->next->next->next;
     }
     return 0;
}
int main(){
Node * t1=new Node(1);
Node* tail1=t1;
Node* head1=t1;
insertF(head1,2);
insertF(head1,3);
insertF(head1,4);
insertF(head1,5);
insertF(head1,6);
insertF(head1,7);
insertF(head1,8);
insertF(head1,9);
print(tail1);
cout<<"If You want to made this link circular write here 1 = ";
int n;cin>>n;
if(n==1){
    int pos;
    cout<<"Now write here position = ";
    cin>>pos;
    Madecir(tail1,pos,head1);
}
if(IsCircular(tail1)==1)cout<<"Your link is circular";
else cout<<"Your link is not circular";
cout<<endl;
int ans=FindCirPos1(tail1);
cout<<ans;
    return 0;
}