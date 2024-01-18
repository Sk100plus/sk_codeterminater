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
  node* findpred(node* current){
    node* current1=current;
    if(current1->left)
    current1=current1->left;
    while(current1->right!=NULL){
        current1=current1->right;
    }
    return current1;
  }
void MorisTraversal(node* root){
    node* current=root;
    // while(current!=NULL){
    //     if(current->left==NULL){
    //         cout<<current->data<<" ";
    //     current=current->right;
    //     }
    //     else{
    //         node* pred=current->left;
    //         while(pred->right&&pred->right!=current){
    //             pred=pred->right;
    //         }
    //         if(pred->right==current){
    //             pred->right=NULL;
    //             current=current->right;
    //         }
    //         else{
    //             cout<<current->data<<" ";
    //             pred->right=current;
    //             current=current->left;
    //         }
    //     }

    // } 
     node* pre;
    while(current!=NULL){

        if(current->left==NULL)
        {
            cout<<current->data<<" ";current=current->right;
        }
        else{
           pre = current->left;
            while (pre->right != NULL
                   && pre->right != current)
                pre = pre->right;
            if(pre->right==NULL){
                pre->right=current;
                current=current->left;
            }
            else{
                pre->right=NULL;
                cout<<current->data<<" ";
                current=current->right;
            }
        }
    }
}
   int main(){
node * root=NULL;
root=rootInsert(root);
MorisTraversal(root);
    return 0;
  }