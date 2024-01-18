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
        struct node n1,n2,n3;
       struct info p,q,r;
       p.data=1;p.name='S';
           q.data=2;q.name='A';
               r.data=3;r.name='S';
n1.first=p;
n2.first=q;
n3.first=r;
n1.next=&n2;
n2.next=&n3;
n3.next=NULL;
struct node* start;
start=&n1;
struct node *s=start;
while(!s){
    printf("%d",n1.first.data);
    s=s->next;
}
    return 0;
}