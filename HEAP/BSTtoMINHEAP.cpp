#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data){
this->data=data;
this->left=NULL;
this->right=NULL;
    }
};
        // RECURSIVE WAY TO CREATE BST
        node* insertinbst(node* root,int data){
            if(root==NULL){
                root=new node(data);
return root;
            }
            if(data>root->data)
            {
                root->right=insertinbst(root->right,data);
            }
            else root->left=insertinbst(root->left,data);
            return root;
        }
        void takeInput(node* &root){
        cout<<"Enter the elements of BST :"<<endl;
            int n;cin>>n;
            while(n!=-1){
               root= insertinbst(root,n);
                cin>>n;
            }
        }
void inorder(node* root,vector<int> &vec){
    if(root==NULL)return;
    inorder(root->left,vec);
    vec.push_back(root->data);
    inorder(root->right,vec);
}
void BstToMin(node* root,vector<int> vec,int &i){
    if(root==NULL)return ;
    root->data=vec[i++];
    BstToMin(root->left,vec,i);
    BstToMin(root->right,vec,i);
}
void Conversion(node* root){
    if(root==NULL)return;
    vector<int> vec;
    int i=0;
    inorder(root,vec);
    BstToMin(root,vec,i);
}
void preorder(node* root){
    if(root==NULL)return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
// Min HEap :=root<left->data && root->data < right->data;
// for answer left<right;
int main(){
    node* root=NULL;
    takeInput(root);
    preorder(root);cout<<endl;
    Conversion(root);
    preorder(root);
    return 0;

}