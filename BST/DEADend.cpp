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
node* findNode(int val,node* root){
    node* save=NULL;
    while(root!=NULL){
        if(root->data==val){
        cout<<"Node value already exist in BST"<<endl;
        return save;}
        else if(root->data>val)
        {
            save=root;
            root=root->left;
        }
        else{
            save=root;
            root=root->right;
        }
    }
    return save;
}
void Insert(node** ptr){
cout<<"Enter value of node "<<endl;
int val;cin>>val;
node* temp=new node(val);
if(*ptr==NULL)
*ptr=temp;
else{
node* save=findNode(val,*ptr);
if(save->data>val)
save->left=temp;
else if(save->data<val)
save->right=temp;
else return ;
}
}

        // RECURSIVE WAY TO CREATE BST
        node* insertinbst(node* root,int data){
            if(root==NULL){
                root=new node(data);
return root;
            }
            if(data>root->data)
            {
                root->right=insertinbst(root->right,data);
            }
            else root->left=insertinbst(root->left,data);
            return root;
        }
        void takeInput(node* &root){
            int n;cin>>n;
            while(n!=-1){
               root= insertinbst(root,n);
                cin>>n;
            }
        }


// CHECK A LEAF NODE EXIST AFTER THAT WE CANNOT INSERT ANY NODE .














  void solve(node* &root,int mini,int maxi,bool &flag){
      if(root==NULL)return ;
      if(flag)return;
      if(root->left==NULL&&root->right==NULL){
          if(mini==maxi||(mini==INT_MIN && maxi ==1)){
              flag=true;
              return ;
          }
      }
      solve(root->left,mini,(root->data)-1,flag);
     solve(root->right,(root->data)+1,maxi,flag);
      
  }
    bool isDeadEnd(node *root)
    {
        int maxi=INT_MAX;
        int mini=INT_MIN;
        bool p;
         solve(root,mini,maxi,p);
         return p;
    }
int main(){
    node* root=NULL;
    int n;
    cin>>n;
    takeInput(root);
    for(int i=0;i<n;i++){
        Insert(&root);
    }
    return 0;
}