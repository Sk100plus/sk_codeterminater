#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int data){
this->data=data;
this->left=NULL;
this->right=NULL;
    }
};

    // RECURSIVE WAY TO CREATE BST
        TreeNode* insertinbst(TreeNode* root,int data){
            if(root==NULL){
                root=new TreeNode(data);
return root;
            }
            if(data>root->data)
            {
                root->right=insertinbst(root->right,data);
            }
            else root->left=insertinbst(root->left,data);
            return root;
        }
        void takeInput(TreeNode* &root){
            int n;cin>>n;
            while(n!=-1){
               root= insertinbst(root,n);
                cin>>n;
            }
        }


void preorder(TreeNode* root){
    if(root==NULL)return ;
    preorder(root->left);
    cout<<root->data<<" ";
    preorder(root->right);
}


 vector<TreeNode*> solve(int st,int end){
     if(st>end)return {NULL};
     if(st==end){
         TreeNode* root=new TreeNode(st);
         return {root};
     }
     vector<TreeNode* > result;
     for(int i=st;i<=end;i++){
         vector<TreeNode*> left=solve(st,i-1);
         vector<TreeNode*> right=solve(i+1,end);
         for(TreeNode* leftR:left){
             for(TreeNode* rightR:right){
                 TreeNode* root=new TreeNode(i);
                 root->left=leftR;
                 root->right=rightR;
                 result.push_back(root);
             }
         }
     }
     return result;
 }

void generateTrees(){
    int n;
    cin>>n;
    vector<TreeNode*> ans=solve(1,n);
    for(int i=0;i<ans.size();i++){
        preorder(ans[i]);
    }
}

int main(){
//     TreeNode* root=NULL;
//     int n;
//     cin>>n;
//     takeInput(root);
//   preorder(root);

generateTrees();
    return 0;
}