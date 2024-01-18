// LONGEST PATH BETWEEN TWO ENDS 
// Here time complexity is O(n^2);
// Due to call of height and diameter function both
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
int solve1(Tree* root){
        if(root==NULL)
        return 0;
        int left=solve1(root->left);
        int right=solve1(root->right);
        return 1+max(right,left);
    }
  int diameter(Tree* root) {
        // Your code here
        if(root==NULL)return 0;
        int op1=diameter(root->left);
        int op2=diameter(root->right);
        int ans1=solve1(root->left);
        int ans2=solve1(root->right);
       int answer1= ans1+ans2+1;
      int secmaxi=max(answer1,max(op1,op2));
       return secmaxi;
  }
//   FOR TIME COMPLEXITY OF o(N) WE USE PAIR WHICH STORE HEIGHT AND DIAMETER AT A TIME 
  // Function to return the diameter of a Binary Tree.
   pair<int,int> diameterF(Tree* root){
       if(root==NULL){
           pair<int,int> p=make_pair(0,0);
           return p;
       }
       pair<int,int> left=diameterF(root->left);
       pair<int,int> right=diameterF(root->right);
       int op1=left.first;
       int op2=right.first;
       int op3=left.second+right.second+1;
       pair<int,int> ans;
       ans.first=max(op1,max(op3,op2));
       ans.second=max(left.second,right.second)+1;
       return ans;
   }
   int pairDiameter(Tree* root){
    if(root==NULL)return 0;
    return diameterF(root).first;
   }
int main(){
    Tree* ele=NULL;
    ele=insert(ele);
cout<<diameter(ele)<<endl;
cout<<pairDiameter(ele);
    return 0;
}