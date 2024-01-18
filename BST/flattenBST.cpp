// #include <bits/stdc++.h> 
// /************************************************************

//     Following is the Binary Tree node structure
    
//     template <typename T>
//     class TreeNode {
//         public :
//         T data;
//         TreeNode<T> *left;
//         TreeNode<T> *right;

//         TreeNode(T data) {
//             this -> data = data;
//             left = NULL;
//             right = NULL;
//         }

//         ~TreeNode() {
//             if(left)
//                 delete left;
//             if(right)
//                 delete right;
//         }
//     };

// ************************************************************/
// void solve(TreeNode<int> *root,vector<int> &vec){
//     if(root==NULL)return ;
//     solve(root->left,vec);
//     vec.push_back(root->data);
//     solve(root->right,vec);
// }
// TreeNode<int>* flatten(TreeNode<int>* root)
// {
//     // Write your code here
//     vector<int> vec;
//     solve(root,vec);
//     TreeNode<int> * ans=new TreeNode<int>(vec[0]);
//     TreeNode<int>* curr=ans;
//     for(int i=1;i<vec.size();i++){
//             TreeNode<int>* ans1=new TreeNode<int>(vec[i]);
//             curr->left=NULL;
//         curr->right=ans1;
//         curr=ans1;
//     }
//     curr->right=NULL;
//     curr->left=NULL;
//     return ans;
// }
