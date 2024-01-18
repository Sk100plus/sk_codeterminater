
// store in vector in inorder then two pointer approach applied



// #include <bits/stdc++.h> 
// // Following is the Binary Tree node structure

// class BinaryTreeNode {
//     public : 
//     int data;
//     BinaryTreeNode*left;
//     BinaryTreeNode *right;

//     BinaryTreeNode(int data) {
//         this -> data = data;
//         left = NULL;
//         right = NULL;
//     }
    
// };
// void solve(BinaryTreeNode * root,vector<int> &vec){
//     if(root==NULL)return;
//     solve(root->left,vec);
//     vec.push_back(root->data);
//     solve(root->right,vec);
// }
// bool binsearch(vector<int> vec,int target){
//     int i=0;int end=vec.size()-1;
//     while(i<end){
//         if(vec[i]+vec[end]==target)return true;
//         if(vec[i]+vec[end]>target)end--;
//         else i++;
//     }
//     return 0;
// }
// bool twoSumInBST(BinaryTreeNode* root, int target) {
// 	//Write your code here
//     vector<int> vec;
//     solve(root,vec);
//   return binsearch(vec,target);
    
// }
// int main(){
//     return 0;
// }