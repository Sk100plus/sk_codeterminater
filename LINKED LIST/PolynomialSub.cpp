#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int coff;
    int pow;
    node * next;
    node(int c,int p){
        this->coff=c;
        this->pow=p;
        this->next=NULL;
    }
};
// Creating a polynomial in  form list
void create(int x,int y, node* &c){
node* temp=new node(x,y);
c->next=temp;
c=temp;
}
 void show(node* temp){
        while(temp!=NULL){
cout<<temp->coff<<"x^"<<temp->pow;
 if(temp->next!=NULL){
  cout<<"+";
        }
temp=temp->next;
   
        }
    }
node* polyMult(node* pol,node* poly2,node* p,vector<node*> ans){
   node* poly1=pol;
    while(!poly2){
        int value=poly2->coff;
        int pow=poly2->pow;
        node* poly=p;
        while(!poly1){
            poly->coff=value*poly1->coff;
poly->pow=pow*poly1->pow;
poly1=poly1->next;
        }
        poly2=poly2->next;
poly1=pol;
ans.push_back(poly);
    }
}
int main(){
    node* poly1=new node(4,4);
    node* poly2=new node(5,5);
    node* c1=poly1;
        node* c2=poly2;
       create(10,3,c1);
              create(24,3,c2);

  show(poly1);
  cout<<endl;  
  show(poly2);
    return 0;
}