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
 if(temp->next!=NULL)
    cout<<"+";
temp=temp->next;
   
        }
    }
void polyadd(node* poly1,node* poly2,node* &poly){
    while(poly1&&poly2){
        // IF ONE HAS LESS POWER THAN OTHER !
        int coffSum=0;int powSum=0; 
        if(poly1->pow>poly2->pow){
            powSum=poly1->pow;
            coffSum=poly1->coff;
            poly1=poly1->next;
        }
        else if(poly1->pow<poly2->pow){
            powSum=poly2->pow;
            coffSum=poly2->coff;
            poly2=poly2->next;
        }
        // IF BOTH HAVING SAME POWER
        else{
            powSum=poly1->pow;
            coffSum=poly1->coff+poly2->coff;
            poly1=poly1->next;
            poly2=poly2->next;
        }
         // Dynamically create new node 
        node* temp=new node(coffSum,powSum);
        poly->next=temp;
        poly=temp;
    }
    while(poly1){
                int coffSum=0;int powSum=0; 
        if(poly1){
            coffSum=poly1->coff;
            powSum=poly1->pow;
            poly1=poly1->next;
        }
           // Dynamically create new node 
        poly->next 
            = ( node*)malloc(sizeof( node)); 
        poly = poly->next; 
        poly->next = NULL; 
    }
       while(poly2){
                        int coffSum=0;int powSum=0; 
         if(poly2){
            coffSum=poly2->coff;
           powSum=poly2->pow;
            poly2=poly2->next;
        }
           // Dynamically create new node 
         node* temp=new node(coffSum,powSum);
        poly->next=temp;
        poly=temp;
    }
}
   
int main(){
    node* poly1=new node(4,2);
    node* poly2=new node(5,2);
    node* c1=poly1;
        node* c2=poly2;
       create(4,1,c1);
              create(4,0,c2);
  show(poly1);
  cout<<endl;  
  show(poly2);
  node* poly=new node(1,2);
  node* c3=poly;
          cout<<endl;
  polyadd(poly1,poly2,c3);
  poly=poly->next;
  show(poly);
    return 0;
}