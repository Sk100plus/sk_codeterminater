// Follow the steps mentioned below to implement the idea:

// 1.Perform the normal BST insertion. 
// 2.The current node must be one of the ancestors of the newly inserted node. Update the height of the current node. 
// 3.Get the balance factor (left subtree height -right subtree height) of the current node. 
// 4.If the balance factor is greater than 1, then the current node is unbalanced and we are either in the Left Left case or left Right case. To check whether it is left left case or not, compare the newly inserted key with the key in the left subtree root. 
// 5.If the balance factor is less than -1, then the current node is unbalanced and we are either in the Right Right case or Right-Left case. To check whether it is the Right Right case or not, compare the newly inserted key with the key in the right subtree root. 

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    int height;
};
int height(Node* n){
    if(n==NULL)return 0;
    return n->height;
}
int max(int a,int b){
    return a>b?a:b;
}
Node* newNode(int key){
    Node* node=new Node();
    node->data=key;
    node->left=NULL;
    node->right=NULL;
    node->height=1;
    return node;
}
// A utility function to right 
// rotate subtree rooted with y  
// See the diagram given above.  
Node* rightRotate(Node* y){

    
    Node* x=y->left;
    Node* T2=x->right;
    x->right=y;
    y->left=T2;
y->height=max(height(y->left),height(y->right))+1;
x->height=max(height(x->left),height(x->right))+1;
return x;
}
// A utility function to left  
// rotate subtree rooted with x  
// See the diagram given above. 
Node* leftRotate(Node* x){
    Node* y=x->right;
    Node* T2=y->left;
    y->left=x;
    x->right=T2;
    x->height=max(height(x->left),height(x->right))+1;
y->height=max(height(y->left),height(y->right))+1;
}
int getBalance(Node* n){
    if(n==NULL)return 0;
    return height(n->left)-height(n->right);
}
// Recursive function to insert a key 
// in the subtree rooted with node and 
// returns the new root of the subtree.  
Node* insert(Node* root,int data){
    if(root==NULL)return newNode(data);
    if(data>root->data)
    root->right=insert(root->right,data);
    else if(data<root->data)
    root->left=insert(root->left,data);
    else return root;

    root->height=1+max(height(root->left),height(root->right));
int bal=getBalance(root);
// Rightrotation
if(bal>1&& data<root->left->data){
return rightRotate(root);
}
// LeftRotation
if(bal<-1&&data>root->right->data)
return leftRotate(root);
// LR
if(bal>1&&data>root->left->data)
{
    root->left=leftRotate(root);
    return rightRotate(root);

}
// RL
if(bal<-1&&data<root->right->data){
root->right=rightRotate(root->right);
return leftRotate(root);
}
return root;
}