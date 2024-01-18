// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
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
bool checkpallin(Node* &tail){
            vector<int> v;
            Node* temp=tail;
            while(temp!=NULL){
                v.push_back(temp->data);
                temp=temp->next;
            }
            vector<int > answer;
            for(int i=0;i<v.size();i++){
                answer.push_back(v[i]);
            }
            reverse(v.begin(),v.end());
if(answer==v)return 1;
return 0;

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
  Node* tem=new Node(0);
   Node* tail=tem;
   Node* head=tem;
    insertF(head,1);
    insertF(head,1);
    insertF(head,1);
    insertF(head,0);
    // insertT(tail,0);
    print(tail);
    cout<<checkpallin(tail);
    return 0;
}