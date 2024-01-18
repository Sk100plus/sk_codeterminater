
// // LCA(lowest common ancestor) in BST similiar like BT/
// node* LCA_BST(node* root,int n1,int n2){
//     if(root==NULL)return NULL;
//     if(root->data==n1||root->data==n2)
//     return root;
//     node* lefti=LCA_BST(root->left,n1,n2);
//     node* righti=LCA_BST(root->right,n1,n2);
//     if(lefti!=NULL&&righti==NULL)
//     return lefti;
//     if(lefti==NULL&&righti!=NULL)
//     return righti;
//     else if(lefti!=NULL&&righti!=NULL)
//     return root;
//     else return NULL;
// }

// // Another method for LCA of BST recursive way
// node* LCA_bst(node* root,int n1,int n2){
//     if(root==NULL)return NULL;
//     if((root->data>n1&&root->data<n2)||(root->data<n1&&root->data>n2))
//     return root;
//      if(root->data>n1&&root->data>n2)
//      return LCA_bst(root->left,n1,n2);
//      return LCA_bst(root->right,n1,n2);
// }
// // Another method for LCA of BST iterative  way
// node* lcaItr(node* root,int n1,int n2){
//     if(root==NULL)return NULL;
//     while(root!=NULL){
//         if(root->data>n1&&root->data>n2)
//         root=root->left;
//         else if(root->data<n1&&root->data<n2)  root=root->left;
//         else    return root;
//     }
//  return root;
// }