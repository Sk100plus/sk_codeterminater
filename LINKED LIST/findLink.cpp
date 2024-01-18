#include<bits/stdc++.h>
#include<math.h>
using namespace std;
class Node{
   
    public:
     int data;
Node* next;
Node(int d){
    this->data=d;
    this->next=NULL;
}
};
void insertF(Node* &head,int d){
    Node* temp=new Node(d);
    head->next=temp;
    head=temp;
}
void insertB(Node* &tail,int d){
    Node* temp=new Node(d);
    temp->next=tail;
    tail=temp;
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
void reachPos(Node* tail1,Node* tail2,int linkPos){
Node* temp1=tail1;
Node* temp2=tail2;
while(temp2->next!=NULL){
    temp2=temp2->next;
}
while(linkPos!=1){
    temp1=temp1->next;
    linkPos--;
}
temp2->next=temp1->next;
}

// TIME COMPLEXITY IS O(n^2);

int Linkvalue(Node* tail1,Node* tail2){
Node* temp1=tail1;
Node* temp2=tail2;
Node* temp3=tail2;
int value=-1;
temp1=tail1;temp2=tail2;
while(temp1!=NULL){
    while(temp2!=NULL){
 if(temp1->next==temp2->next){
            temp1=temp1->next;
            value=temp1->data;
            break;
            }
            else temp2=temp2->next;
    }
           if(value!=-1)break;
    else {
        temp3=temp3->next;
        temp2=temp3;
        temp1=temp1->next;
    } 
    }
return value;
}
int min(int a,int b){
    if(a<b)return a;
    else return a;
}

// TIME COMPLEXITY IS O(N);

int LinkIndex(Node* tail1,Node* tail2){
Node* temp1=tail1;
Node* temp2=tail2;
int len1=0,len2=0;
while(temp1!=NULL){
    temp1=temp1->next;
    len1++;
}
while(temp2!=NULL){
    temp2=temp2->next;
    len2++;
}
int diff=abs(len1-len2);
temp1=tail1;
temp2=tail2;
if(len1>len2){
    while(diff!=0){
        temp1=temp1->next;
        diff--;
    }
}
else if(len1<len2){
    while(diff!=0){
        temp2=temp2->next;
        diff--;
    }

}
int small=min(len1,len2);
int answer=-1;
int index=diff;
while(small!=0){
    if(temp1->data==temp2->data){
            answer=temp1->data;
            break;
    }
    index++;
    temp1=temp1->next;
    temp2=temp2->next;
    small--;
}
return index;
}
int main(){
   
Node* n1=new Node(0);
Node* n2=new Node(9);
Node* head2=n2;
Node* tail2=n2;
Node* head1=n1;
Node* tail1=n1;
insertF(head1,19);
insertF(head1,3);
insertF(head1,4);
insertF(head2,10);
insertF(head2,11);
print(tail1);
cout<<endl;
print(tail2);
cout<<endl;
 int linkPos;
cin>>linkPos;
reachPos(tail1,tail2,linkPos);
print(tail1);
cout<<endl;
print(tail2);
cout<<endl;
int posLink=Linkvalue(tail1,tail2);
cout<<"Linking value is :"<<posLink<<endl;
int posLink1=LinkIndex(tail1,tail2);
cout<<"Linking index is point :"<<posLink1;
    return 0;
}