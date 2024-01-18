// Node* solve(int in[],int post[],int left,int right,int &ind){
//     if(left>right)return NULL;
//     int pivot=left;
//     while(in[pivot]!=post[ind])pivot++;
//     ind--;
//     Node* newN=new Node(in[pivot]);
//         newN->right=solve(in,post,pivot+1,right,ind);
//  newN->left=solve(in,post,left,pivot-1,ind);
//     return newN;
// }
// Node *buildTree(int in[], int post[], int n) {
//     // Your code here
//     int ind=n-1;
//     Node* root=solve(in,post,0,n-1,ind);
//     return root;
// }