// class Solution {
//     bool check(TreeNode* p,TreeNode* q){
//         if(p==NULL&&q==NULL)return 1;
//         if(p==NULL||q==NULL)return 0;
//         if(p->val==q->val){
//        return check(p->left,q->left)&&check(p->right,q->right);}
//         return 0 ;
//     }
// public:
//     bool isSameTree(TreeNode* p, TreeNode* q) {
//        return  check(p,q);
//     }
// };