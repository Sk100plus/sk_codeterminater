// HERE TWO LINKED LIST ARE ALREADY SORTED AND JOIN THEM AND RETURN A FINAALY SORTED LINKED LIST
//                     FUNCTION
    
                                                /*WHOLE CODE FOR THIS CASE*/

  /* Node<int>* solve(Node<int>* first, Node<int>* second){
    // if first linked list contains only one element then
    if(first->next==NULL){
        first->next=second;
        return first;
    }
        Node<int>* prev=first;
        Node<int>* curr1=prev->next;
        Node<int>* curr2=second;
         Node<int>* next2=curr2->next;
        while(curr1!=NULL&&curr2!=NULL){
           
          if (curr2->data >= prev->data && curr2->data <= curr1->data) {
            //   add nodes between two nodes
            prev->next = curr2;
            next2=curr2->next;
            curr2->next = curr1;
            // Update pointers
             prev = curr2;
            curr2 =next2;
          }
         else{
             prev=curr1;
             curr1=curr1->next;
             if(curr1==NULL){
                 prev->next=curr2;
                 return first;
             }
         }
        }
        return first;
}
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first==NULL)return second;
    if(second==NULL)return first;
   if(first->data<=second->data)
   return solve(first,second);
   else
   return solve(second,first);
   
}
*/
