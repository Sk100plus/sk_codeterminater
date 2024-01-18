//  DIFFERENCE OF MAX HEIGHT AT LEFT AND AT RIGHT OF A PARTICULAR NODE

// Given a binary tree, find if it is height balanced or not. 
// A tree is height balanced 
// if difference between heights of left and right subtrees is not more than one for all nodes of tree. 
#include<bits/stdc++.h>
using namespace std;
class Tree{
    public:
    int data;
    Tree* left;
    Tree* right;
    Tree(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
Tree* insert(Tree * root){
    int n;
    cin>>n;
 root=new Tree(n);
 if(n==-1)return NULL;
 cout<<"Enter left data "<<n<<endl;
 root->left=insert(root->left);
 cout<<"Enter right data "<<n<<endl;
 root->right=insert(root->right);
return root;
}
bool ans=true;
int maxheight(Tree * root){
    if(root==NULL)return 0;
    int left=maxheight(root->left);
    int right = maxheight(root->right);
    if(abs(left-right)>1) ans=false;
    return 1+max(left,right);
}
// ANOTHER METHOD  
int height(Tree* root){
     if(root==NULL)return 0;
     int left=height(root->left);
     int right=height(root->right);
     return 1+max(left,right);
 }

 
bool isBalanced(Tree* root){
    if(root==NULL)return 1;
    bool left=isBalanced(root->left);
    bool right=isBalanced(root->right);
    bool diff=abs(height(root->left)-height(root->right))<=1;
if(left&&right&&diff)return 1;
return 0;
}


// THIRD METHOD HERE TIME COMPLEXITY IS   *********O(n)**********
//  pair<bool,int> fast(Node* root){
//        if(root==NULL){
//            pair<bool,int> p=make_pair(true,0);
//            return p;}
           
//       pair<bool,int> left=fast(root->left);
//        pair<bool,int> right=fast(root->right);
//       bool diff=abs((left.second)-(right.second))<=1;
//        pair<bool,int> ans;
//           ans.second=1+max(left.second,right.second);
//       if(left.first&&right.first&&diff){
//          ans.first=true;
//       }
//       else ans.first=false;
//       return ans;
//  }
//     bool isBalanced(Node *root)
//     {
//       return fast(root).first;

//     }

int main(){
    Tree* ele=NULL;
    ele=insert(ele);

    return 0;
}