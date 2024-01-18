#include<stdio.h>
struct info{
int data;
char name;
};
struct node{
struct info first;
struct node* next;
};
int main(){
       struct  node n1,n2,n3;
    n1.first.data=1;
n2.first.data=2;
n3.first.data=3;
       n1.first.name='S';
           n2.first.name='A';
               n3.first.name='S';

n1.next=&n2;
n2.next=&n3;
n3.next=NULL;
struct node* start;
start=&n1;
struct  node *s=start;
while(s!=NULL){
printf("%d %c ",s->first.data,s->first.name);
    s=s->next;
}
    return 0;
}