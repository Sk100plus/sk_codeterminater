  
//   Print data from left to right then right to left then left to right and continued this process
// OR SPIRAL TRAVERSAL CASE !
    
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
  node* rootInsert(node * root){
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
    bool lefttoright=true;
    vector<int> vec;
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
             vec.push_back(temp->data);
     
  if(temp->left){
            q.push(temp->left);
            lefttoright=true;
        }
        if(temp->right){
            q.push(temp->right);
            lefttoright=false;
        }
        }
    }
    cout<<endl;
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}

        
// Another method of zigzag traversal

  vector <int> zigZagTraversal(node* root)
    {
    	// Code here
    	    
    	vector<int> ans;
    if (!root) {
        return ans;
    }

    queue<node*> q;
    q.push(root);
    bool LtoR = true;

    while (!q.empty()) {
        int n = q.size();
        vector<int> temp(n);

        for (int i = 0; i < n; i++) {
            node* front = q.front();
            q.pop();

            int width = LtoR ? i : n - 1 - i;
            temp[width] = front->data;

            if (front->left) {
                q.push(front->left);
            }
            if (front->right) {
                q.push(front->right);
            }
        }
        LtoR = !LtoR;
        ans.insert(ans.end(), temp.begin(), temp.end());
    }

    return ans;
    }

vector<int> zigzag(node* root)
{
queue<node*> q;
vector<int> vec;
if(root==NULL)return vec;
q.push(root);
q.push(NULL);
bool lefttoright=true;
while(!q.empty()){
    int size=q.size();
vector<int> vec1(size);
for(int i=0;i<size;i++){
    node* front=q.front();
    q.pop();
    // insert or reverse insert way according to value of lefttoright
    int ind=lefttoright?i:size-i-1;
    vec1[ind]=front->data;
    if(front->left)
    q.push(front->left);
    if(front->right)
    q.push(front->right);
}
lefttoright=!lefttoright;
for(auto i:vec1){
    vec.push_back(i);
}
}
}


  int main(){
node * root=NULL;
node* root1=rootInsert(root);
orderTraversal(root1);
    return 0;
  }