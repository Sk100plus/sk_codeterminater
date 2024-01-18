// /*************************************************************
//     Following is the Binary Serach Tree node structure

//     template <typename T>
//     class TreeNode
//     {
//     public :
//         T data;
//         TreeNode<T> *left;
//         TreeNode<T> *right;

//         TreeNode(T data) {
//             this -> data = data;
//             left = NULL;
//             right = NULL;
//         }

//         ~TreeNode() {
//             if (left)
//                 delete left;
//             if (right)
//                 delete right;
//         }
//     };

// *************************************************************/
// void solve(TreeNode<int>* root,vector<int> &vec){
//     if(root==NULL)return ;
//     solve(root->left,vec);
//     vec.push_back(root->data);
//     solve(root->right,vec);
// }
// TreeNode<int>* inToBST(int s,int e,vector<int> &vec){
//     if(s>e)return NULL;
//     int mid=e-(e-s)/2;
//     TreeNode<int>* temp=new TreeNode<int> (vec[mid]);
//     temp->left=inToBST(s,mid-1,vec);
//     temp->right=inToBST(mid+1,e,vec);
//     return temp;
//     }
// TreeNode<int>* balancedBst(TreeNode<int>* root) {
//     // Write your code here.
//     vector<int> vec;
//     solve(root,vec);
// return inToBST(0,vec.size()-1,vec);
// }
