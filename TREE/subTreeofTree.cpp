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
  void preorder(node* root,string &s){
    if(root==NULL)
    return ;
    s.push_back(root->data-'0');
    preorder(root->left,s);
    preorder(root->right,s);
  }
  void inorder(node* root,string &s){
    if(root==NULL)
    return ;
    inorder(root->left,s);
    s.push_back(root->data-'0');
inorder(root->right,s);
  }
  bool check(string s1,string s3){
int s1length=s1.length();
int s3length=s3.length();
for(int i=0;i<=s3length-s1length;i++){
    if(s3.substr(i,s1length)==s1)
    return 1;
}
return 0;
  }
  int main(){
    cout<<"Enter data for ParentTree"<<endl;
node* rootTree=NULL;
rootTree=rootInsert(rootTree);
    cout<<"Enter data for subTree"<<endl;
node * rootsub=NULL;
rootsub=rootInsert(rootsub);
    
string s1,s2,s3,s4;
preorder(rootsub,s1);
inorder(rootsub,s2);
preorder(rootTree,s3);
inorder(rootTree,s4);
if(check(s1,s3)&&check(s2,s4))
cout<<"Yes";
else cout<<"No";
    return 0;
  }