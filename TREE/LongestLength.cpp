  
  // TIME COMPLEXITY IS O(N) WE GO THROGH EACH NODE OF TREE 
  // In each call constant space is used and n number of calls occur so SPACE COMPLEXITY IS O(N) N NUMBER OF CALLS OCCUR;
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
int largestlength(node* root){
     if(root==NULL)
        return 0;
        int left=largestlength(root->left);
        int right=largestlength(root->right);
        return 1+max(right,left);
}
void minVal(node* root,int &p){
  if(root==NULL)return ;
  if(root->data<p)
  p=root->data;
minVal(root->left,p);
minVal(root->right,p);
}
  void maxVal(node* root,int &p){
  if(root==NULL)return ;
  if(root->data>p)
  p=root->data;
minVal(root->left,p);
minVal(root->right,p);
}
  int main(){
node * root=NULL;
rootInsert(root);
// orderTraversal(root);
cout<<largestlength(root)<<endl;
int p=root->data;
minVal(root,p);
cout<<p<<endl;
    return 0;
  }