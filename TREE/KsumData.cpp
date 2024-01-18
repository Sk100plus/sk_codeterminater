
// Given a binary tree and an integer K. Find the number of paths in the tree which have their sum equal to K.
// A path may start from any node and end at any node in the downward direction.
// Since the answer may be very large, compute it modulo 109+7.


// BEST APPROACH:

//  int solve(Node *root, int k, map<int,int> &s, int sum)
//     {
//         if(root == NULL)
//             return 0;
//         int c = 0;
//         sum += root -> data;
//         if(s.find(sum-k) != s.end())
//             c += s[sum - k];
//         s[sum]++;
//         int left = solve(root -> left, k, s, sum);
//         int right = solve(root -> right, k, s, sum);
//         s[sum]--;
//         return c + left + right;
//     }
//     int sumK(Node *root,int k)
//     {
//         // code here
//         map<int,int> s;
//         s[0]++;
//         return solve(root, k, s, 0);
//     }


// Another way:



//     void preorder(Node* root,vector<int>& vec,int &count,int k){
//      if(root==NULL)return;
//      vec.push_back(root->data);
//      preorder(root->left,vec,count,k);
//      preorder(root->right,vec,count,k);
//      int f=0;
//      for(int j=vec.size()-1;j>=0;j--){
//          f+=vec[j] % mod;
//          f=f%mod;
//          if(f==k){
//              count+=1 % mod;
//          }
//      }
//      vec.pop_back();
//  }
//     int sumK(Node *root,int k)
//     {
//         // code here 
//         int sum=0;
//         vector<int> vec;
//      preorder(root,vec,sum,k);
//         return sum;
//     }