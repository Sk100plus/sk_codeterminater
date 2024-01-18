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
 void preorder(node* root){
          if(root==NULL)return;
          cout<<root->data<<" ";
          preorder(root->left);
          preorder(root->right);
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

// FROM PREORDER VECTOR TO CREATE BST;
node* create(vector<int> &vec,int min,int max,int &i){
    if(i>=vec.size()||(vec[i]<min||vec[i]>max))return NULL;
    node* root=new node(vec[i++]);
    root->left=create(vec,min,root->data,i);
    root->right=create(vec,root->data,max,i);
return root;
}

// DELETION OF NODE
// ITERATIVELY DELETION 
node* minValue(node* 
root){
    if(root->left==NULL)return root;
    return minValue(root->left);
}
        node* findDeleteN(node* &root,int data){
            node* temp=root;
            node* save=root;
            while(temp!=NULL){
                if(temp->data==data)
                {
if(temp->left==NULL&&temp->right==NULL){
if(save->right==temp)
save->right=NULL;
else save->left=NULL;
free(temp);
return root;
}             
else if(temp->left==NULL){
    if(save->right==temp)
save->right=temp->right;
else save->left=temp->right;
return root;
}          
else if(temp->right==NULL){
    if(save->right==temp)
save->right=temp->left;
else save->left=temp->left;
return root;
}      
else{
 int mini=minValue(temp->right)->data;
     temp->data=mini;
     delete temp;
     return root;
}
                }
                else if(temp->data>data){
                    save=temp;
                    temp=temp->left;
                }
                else {
                    save =temp;
                    temp=temp->right;
                }
            }
        }

// RECURSIVE WAY OF DELETION OF NODE 

node* minVal(node* root){
    if(root->left==NULL)return root;
    return minVal(root->left);
}
node* del(node* root,int val){
    if(root==NULL)return root;
    if(root->data==val){
        // 0 node
if(root->left==NULL&&root->right==NULL){
    delete root;
    return NULL;
}
        // 1 node
     if(root->left!=NULL&&root->right==NULL){
        node* temp=root->left;
        delete root;
        return temp;
     }
     if(root->left==NULL&&root->right!=NULL){
        node* temp=root->right;
        delete root;
        return temp;
     }
        // 2 node
else{
     int mini=minVal(root->right)->data;
     root->data=mini;
     root->right=del(root->right,mini);
     return root;
}
    }
    else if(root->data>val){
        root->left=del(root->left,val);
        return root;
    }
    else {
        root->right=del(root->right,val);
        return root;
    }
}

// CHECK VALIDITY OF BST OR NOT
bool isBST(node* root,int min,int max){
    if(root==NULL)
    return true;
if(root->data>min&&root->data<max){
    bool left=isBST(root->left,min,root->data);
    bool right=isBST(root->right,root->data,max);
    return left&&right;
}
return false;
}
bool validBST(node* root){
    if(root==NULL)return true;
         return isBST(root,INT_MIN,INT_MAX);
}



//  KTH SMALLEST ELEMENT IN A BST
void kth(node* root,int &i,int k,node* ans){
    if(root==NULL)return;
    kth(root->left,i,k,ans);
    // we go left to left and when we come on node from left side it will be ith smallest element so increase i by 1 here

    i++;
    if(i==k){ans=root;return;}
    kth(root->right,i,k,ans);

}
int kthSma(node* root,int k){
    int i=0;
    node* ans;
    kth(root,i,k,ans);
    return ans->data;
}

//  PREDECCEOR
node* minRight(node* root){
   node* temp=root;
   while(temp->left!=NULL)
   temp=temp->left;
return temp;
}
node* findKey(node* root,int key){
  if(root==NULL)return root;
  if(root->data==key)
  return root;
  return root->data>key?root->left:root->right;
}
int successor(node* root,int key){
         node* keyNode=findKey(root,key);
        node* temp= minRight(keyNode->right);
         return temp->data;
}
node* maxLeft(node* root){
    node* temp=root;
    while(temp->right)
    temp=temp->right;
return temp;
}
int predeccessor(node* root,int key){
    node* keyNode=findKey(root,key);
    node* temp=maxLeft(keyNode->left);
     return temp->data;
}


int main(){
    node* root=NULL;
    int n;
    cin>>n;
    takeInput(root);
    for(int i=0;i<n;i++){
        Insert(&root);
    }
    preorder(root);
    // node* p=del(root,38);
    // cout<<endl;
    //     preorder(p);
        // cout<<successor(root,2)<<endl;
        // cout<<predeccessor(root,2);
        // cout<<LCABST(root,7,11)->data<<endl;
       


    //    PREORDER TO CREATE A BST
    //    int n;
    //    cin>>n;
    //     vector<int> vec(n);
    //     for(int i=0;i<n;i++){cin>>vec[i];}
    //     int p=0;
    //   node* root=  create(vec,INT_MIN,INT_MAX,p);
    //   preorder(root);
    return 0;
}