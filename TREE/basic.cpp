  #include<bits/stdc++.h>
  using namespace std;
  class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
  };
  node* rootInsert(node * &root){
        cout<<"Enter the data"<<endl;
        int data;cin>>data;
        root=new node(data);
if(data==-1)return NULL;
cout<<"Enter data for inserting in left : "<<data<<endl;
root->left=rootInsert(root->left);
cout<<"Enter data for inserting at right :"<<data<<endl;
root->right=rootInsert(root->right);
return root;
  }
//   LEVEL ORDER TRAVERSAL for printing
void orderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
   q.pop();
        if(temp==NULL){ //purana elements traverse hochuka hai
            cout<<endl;
            if(!q.empty()){//queue still has some child nodes
                q.push(NULL);
            }
        }
        else{
             cout<<" " <<temp->data<<" ";
     
  if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }
    }
}

        // INORDERE PRINTING OF TREE  Left-node-Right
        void inorder(node* root){
          if(root==NULL)return;
          inorder(root->left);
          cout<<root->data<<" ";
          inorder(root->right);
        }
        // PREORDER PRINTING OF TREE node-Left-Right
        void preorder(node* root){
          if(root==NULL)return;
          cout<<root->data<<" ";
          preorder(root->left);
          preorder(root->right);
        }
        //  postorder printing of tree Left-Right-node
        void postorder(node* root){
          if(root==NULL)return;
          postorder(root->left);
          postorder(root->right);
          cout<<root->data<<" ";
        }

//  LEVELORDER TRAVERSAL METHOD TO BUILD TREE
void build(node*& root){
  queue<node*> q; 
   cout<<"Enter data for root :";
   int data;
   cin>>data;
   root=new node(data);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    
  q.push(root);
 
  while(!q.empty()){
    node* temp=q.front();
q.pop();
cout<<"Enter left node for :"<<temp->data<<endl;
int leftdata;
cin>>leftdata;
if(leftdata!=-1){
temp->left=new node(leftdata);
q.push(temp->left);}

cout<<"Enter right node for :"<<temp->data<<endl;
int rightdata;
cin>>rightdata;
if(rightdata!=-1){
temp->right=new node(rightdata);
q.push(temp->right);}
  }
}

// VERTICAL ORDER TRAVERSAL OF BINARY TREE
// according to straight line we insert values of nodes
 vector<int> verticalOrder(node *root)
    {
        //Your code here
        map<int,map<int,vector<int>>> nodes;
        queue<pair<node*,pair <int,int>>>q;
                vector<int> ans;
        if(root==NULL)return ans;
        q.push(make_pair(root,make_pair(0,0)));
        while(!q.empty()){
            pair<node*,pair<int,int>> temp=q.front();
            q.pop();
            node* frontnode=temp.first;
            int hd=temp.second.first;
            int lvl=temp.second.second;
            nodes[hd][lvl].push_back(frontnode->data);
            if(frontnode->left)
            q.push(make_pair(frontnode->left,make_pair(hd-1,lvl+1)));
             if(frontnode->right)
            q.push(make_pair(frontnode->right,make_pair(hd+1,lvl+1)));
        }
        for(auto i:nodes){
            for(auto j:i.second){
                for(auto k:j.second){
                    ans.push_back(k);
                }
            }
        }
        return ans;
    }
// CHECK AN ELEMENT PRESENT IN A TREE OR NOT
bool check(node* &root,int x){
if(root==NULL)return 0;
if(root->data==x)
return true;
bool left=check(root->left,x);
bool right=check(root->right,x);
if(left||right)
return true;
else return false;
}


// TOP VIEW OF TREE
vector<int> verticalview(node* root){
vector<int> ans;
if(root==NULL)
return ans;
map<int,int> mp;
queue<pair<node*,int>> q;
q.push(make_pair(root,0));
while(!q.empty()){
  pair<node*,int> temp=q.front();
  q.pop();
  node* val=temp.first;
  int hd=temp.second;
  if(mp.find(hd)==mp.end())
  mp[hd]=val->data;
  if(val->left)
  q.push(make_pair(val->left,hd-1));
  if(val->right)
  q.push(make_pair(val->right,hd+1));
}
for(auto i:mp)
ans.push_back(i.second);
return ans;
}


// BOTTOM VIEW
 vector <int> bottomView(node *root) {
        // Your Code Here
        vector<int> ans;
        if(root==NULL)return ans;
        queue<pair<node* ,int>> q;
        map<int,int> mp;
        q.push(make_pair(root,0));
        while(!q.empty()){
            pair<node*,int> temp=q.front();
            q.pop();
            node* val=temp.first;
            int hd=temp.second;
            // if(mp.find(hd)!=mp.end());
            mp[hd]=val->data;
            if(val->left)
            q.push(make_pair(val->left,hd-1));
            if(val->right)
            q.push(make_pair(val->right,hd+1));
        }
        for(auto i:mp)
        ans.push_back(i.second);
        return ans;
    }


// RIGHT VIEW USING RECURSION

  void solve(node* root,vector<int> &mp,int hd){
        if(root==NULL)
        return ;
        if(hd==mp.size())
        mp.push_back(root->data);
        if(root->right)
        solve(root->right,mp,hd+1);
         if(root->left)
        solve(root->left,mp,hd+1);
    }
    vector<int> rightView(node *root)
    {
       // Your Code here
         vector<int> vec;
   if(root==NULL)return vec;
   int hd=1;
   solve(root,vec,0);
   return vec;
    }


// Sum of nodes on the longest path from root to leaf node
// space complexity in case of whole traversal of tree will longest path of tree between root node and leaf node;
// Time complexity will be O(n) as we travel at each node at once;

  void solve1(node* root,int sum,map<int,int> &mp,int count){
        if(root->left==NULL&&root->right==NULL){
            sum+=root->data;
            mp[count]=sum;
sum-=root->data;
count--;
return;
        }
sum+=root->data;
count++;
if(root->left)
        solve1(root->left,sum,mp,count);
        if(root->right)
        solve1(root->right,sum,mp,count);
    }
    int sumOfLongRootToLeafPath(node *root)
    {
        //code here
        vector<int> vec;
        map<int,int> mp1;
       solve1(root,0,mp1,0);
      int ans;
      int check=-1;
        for(auto i:mp1)
       {
           if(i.first>check){
               check=i.first;
               ans=i.second;
           }
        //   if(i.first==check&&ans<i.second)
        //   ans=i.second;
       }
        return ans;
    }

      void solve(node* root,int k,vector<int>&nodes,int &count){
        if(root==NULL){
            return ;
        }
        
        nodes.push_back(root->data);
        solve(root->left,k,nodes,count);
        solve(root->right,k,nodes,count);
        int curr_sum=0;
        int size=nodes.size();
        for(int i=size-1;i>=0;i--){
            curr_sum+=nodes[i];
            
            if(curr_sum==k){
                count++;
            }
         
        }
        
        nodes.pop_back();
      
    }
    int sumK(node *root,int k)
    {
       vector<int>nodes;
       int count=0;
       solve(root,k,nodes,count);
       return count;
    }

//  PREORDER WITHOUT RECURSION
void preorderIterative(node* root){
stack<node*> st;
// st.push(root->right);
while(!st.empty()||root!=NULL){
              cout<<root->data<<" ";
    if(root->right)
        st.push(root->right);
    root=root->left;
  if(root==NULL&&!st.empty()){
  root=st.top();
  st.pop();
  }
}
}

void InorderIerative(node* root){
stack<node*> st;
while(!st.empty()||root!=NULL){
  if(root!=NULL){
 st.push(root);
  root=root->left;
  }
 
  if(root==NULL)
  {
    root=st.top();st.pop();
    cout<<root->data<<" ";
    root=root->right;
  }
}
}
// postorder iterative way printing                                                       
vector<int> postOrderIterative(struct node* root)
{
	vector<int> postOrderList;
	if (root == NULL)
		return postOrderList;
	stack<node*> S;
	S.push(root);
	node* prev = NULL;
	while (!S.empty()) {
		auto current = S.top();
	
		if (prev == NULL || prev->left == current
			|| prev->right == current) {
			if (current->left)
				S.push(current->left);
			else if (current->right)
				S.push(current->right);
			else {
				S.pop();
				postOrderList.push_back(current->data);
			}
		
		}

		else if (current->left == prev) {
			if (current->right)
				S.push(current->right);
			else {
				S.pop();
				postOrderList.push_back(current->data);
			}

		}
		else if (current->right == prev) {
			S.pop();
			postOrderList.push_back(current->data);
		}
		prev = current;
	}
	return postOrderList;
}
node* findLeaf(node* root,int val){
  if(root==NULL)
  return ;
  node* save=root;
  if(save->data==val)return save;
  findLeaf(root->left,val);
  
  findLeaf(root->right,val);
}
void deletionval(node* root,int val){
  // If leaf node
  findLeaf(root,val);
}

  int main(){
node * root=NULL;
root=rootInsert(root);
// orderTraversal(root);
InorderIerative(root);
// build(root);
// orderTraversal(root);
// cout<<endl;
// cout<<check(root,9);
    return 0;
  }