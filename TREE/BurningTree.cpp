//   Node* createNodeParent(Node* root,int target,map<Node*,Node*>& NodeToParent){
//       Node* res=NULL;
//       queue<Node*> q;
//       q.push(root);
//       NodeToParent[root]=NULL;
//       while(!q.empty()){
//           Node* temp=q.front();
//           q.pop();
//           if(temp->data==target){
//               res=temp;
//           }
//           if(temp->left){
//               NodeToParent[temp->left]=temp;
//               q.push(temp->left);
//           }
//           if(temp->right){
//               NodeToParent[temp->right]=temp;
//               q.push(temp->right);
//           }
//       }
//       return res;
//   }
//   void burnTree(Node* target,map<Node*,Node*>& NodeToParent,int &ans){
//       map<Node*,bool> visited;
//       queue<Node*> q;
//       q.push(target);
//       visited[target]=true;
//       while(!q.empty()){
//           int size=q.size();
//         //  For checking new element add in queue or not 
//           bool flag=0;
//           for(int i=0;i<size;i++){
//               Node* front=q.front();q.pop();
//               if(front->left&& !visited[front->left]){
//                   flag=1;
//                   q.push(front->left);
//                   visited[front->left]=1;
//               }
//               if(front->right&& !visited[front->right]){
//                                     flag=1;
//                   visited[front->right]=1;
//                   q.push(front->right);
//               }
//               if(NodeToParent[front]&&!visited[NodeToParent[front]]){
//                                     flag=1;
//                   visited[NodeToParent[front]]=1;
//                   q.push(NodeToParent[front]);
//               }
//           }
//           if(flag==true)
//           ans++;
//       }
//   } 
//     int minTime(Node* root, int target) 
//     {
//         // Your code goes here
//         int ans=0;
//         map<Node*,Node*> mp;
//        Node* targetNode= createNodeParent(root,target,mp);
//        burnTree(targetNode,mp,ans);
//        return ans;
//     }