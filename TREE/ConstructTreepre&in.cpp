// Node* solve(int in[],int pre[],int left,int right,int &ind){
//         if(left>right)return NULL;
//         int pivot=left;
//         while(pre[ind]!=in[pivot])pivot++;
//         ind++;
//         Node* root=new Node(in[pivot]);
//         root->left =solve(in,pre,left,pivot-1,ind);
//         root->right=solve(in ,pre,pivot+1,right,ind);
//         return root;
//     }
//     Node* buildTree(int in[],int pre[], int n)
//     {
//         int ind=0;
//         return solve(in,pre,0,n-1,ind);
//     }


// Optimise case using map


    // Node* solve(int in[],int pre[],int left,int right,int &ind,map<int,int> &mp,int n){
    //     if(left>right||ind>=n)return NULL;
    //     int ele=pre[ind++];
    //             Node* root=new Node(ele);

    //  int pivot=mp[ele];
        
    //     root->left =solve(in,pre,left,pivot-1,ind,mp,n);
    //     root->right=solve(in ,pre,pivot+1,right,ind,mp,n);
    //     return root;
    // }
    // Node* buildTree(int in[],int pre[], int n)
    // {
    //     // Code here
    //     int ind=0;
    //     map<int,int> mp;
    //     for(int i=0;i<n;i++){
    //         mp[in[i]]=i;
    //     }
    //     return solve(in,pre,0,n-1,ind,mp,n);
    // }