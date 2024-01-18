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
//   Dynamic creation of tree
node* rootIn(node* &root){
    cout<<"Enter root data "<<endl;
    int rootdata;
        cin>>rootdata;
        root=new node( rootdata);
        stack<node*> st;
        st.push(root);
        while(!st.empty()){
            node* temp=st.top();
            st.pop();
            cout<<"Enter data for inserting in left : "<<temp->data<<endl;
            int leftE;cin>>leftE;
            node* fakeL=new node(leftE);
            if(leftE==-1){
                temp->left=NULL;
            }
            else{
                temp->left=fakeL;
                st.push(fakeL);
            }
            cout<<"Enter data for inserting in right : "<<temp->data<<endl;
            int rightE;cin>>rightE;
            node* fakeR=new node(rightE);
            if(rightE==-1){
                temp->right=NULL;
            }
            else{
                temp->right=fakeR;
                st.push(fakeR);
            }
        }
return root;
}
  void zigzag(node* &root){
    stack<node*> st1;
    stack<node*> st2;
    st1.push(root);
    while(!st1.empty()||!st2.empty()){
while(!st1.empty()){
node* temp=st1.top();
st1.pop();
cout<<temp->data<<" ";
if(temp->right)
st2.push(temp->right);
if(temp->left)
st2.push(temp->left);
}
cout<<endl;
while(!st2.empty()){
node* temp=st2.top();
st2.pop();
cout<<temp->data<<" ";
if(temp->left)
st1.push(temp->left);
if(temp->right)
st1.push(temp->right);
}
cout<<endl;
    }
  }
  
  int main(){
node * root=NULL;
root=rootIn(root);
zigzag(root);
    return 0;
  }