// Finding closing element to x in a tree;
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
int data;
Node* left;
Node* right;
Node(int data){
    this->data=data;
    this->right=NULL;
    this->left=NULL;
}
};
  Node* insert(Node * root){
        cout<<"Enter the data"<<endl;
        int data;cin>>data;
        root=new Node(data);
if(data==-1)return NULL;
cout<<"Enter data for inserting in left : "<<data<<endl;
root->left=insert(root->left);
cout<<"Enter data for inserting at right :"<<data<<endl;
root->right=insert(root->right);
return root;
  }
int solve(Node* root,int x){
    int value=-1;
    while(root!=NULL){
        if(root->data==x){
            value=root->data;
            return value;
        }
        else if(root->data<x&&value<root->data){
            value=root->data;
            root=root->right;
        }
        else{
            root=root->left;
        }
    }
    return value;
}
int main(){
    Node* root=NULL;
    root=insert(root);
    int x;cin>>x;
    int ans=solve(root,x);
    cout<<ans;
    return 0;
}