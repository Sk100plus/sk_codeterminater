// How to proceed.
// Step 2:break using function fast and slow method in which at last one is at mid and second at last
// Step 2: break into halves and sort them recursively
// Step 3:Now join them according to element preferences 
/********************************************************************

    Following is the representation of the Singly Linked List Node:

    class node{
        public:
            int data;
            node * next;
            node(int data){
                this->data=data;
                this->next=NULL;
            }
    };
    
********************************************************************/


                             // *****FULL CODE TO UNDERSTAND ***********

                                            // TIME COMPLEXITY O(nlog(n))  and space complexity O(log(n))

// node* midFind(node* head){
//     node* first=head;
//     node* second=head->next;
//     while(second!=NULL&&second->next!=NULL){
//         second=second->next->next;
//         first=first->next;
//     }
//     return first;
// }
// node* merging(node* first,node* second){
//     if(first==NULL)return second;
//     else if(second==NULL)return first;
// node* temp1=new node(-1);
// node* temp=temp1;
// while(first!=NULL&&second!=NULL){
//         if (first->data < second->data) {
//             temp->next=first;
//             temp=first;
//           first = first->next;
//         } else {
            
//             temp->next=second;
//             temp=second;
//             second=second->next;
//         }
// }
// while(first!=NULL){
//     temp->next=first;
//     temp=first;
//     first=first->next;
// }
// while(second!=NULL){
//     temp->next=second;
//     temp=second;
//     second=second->next;
// }
// temp1=temp1->next;
// return temp1;
// }
// node* mergeSort(node *head) {
//     // Write your code here.
//     if(head==NULL||head->next==NULL)return head;
//         node* mid=midFind(head);

//         node* first=head;

//         node* second=mid->next;

//         mid->next=NULL;
//         // recursively sorting method
//         first=mergeSort(first);
//         second=mergeSort(second);
// // now merge both the lists
// node* res=merging(first,second);
// return res;
// }