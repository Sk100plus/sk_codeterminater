/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include<bits/stdc++.h>
using namespace std;
 class ListNode {
    public:
      int val;
    ListNode* next;
      ListNode(int x) {
        this->next=NULL;
        this->val=x;
      }
  };
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
            ListNode* fast=head;
            while(fast!=NULL&&fast->next!=NULL){
                    fast=fast->next->next;
                    slow=slow->next;
            if(slow==fast){
                    slow=head;
            while(slow!=fast){
                fast=fast->next;
                slow=slow->next;
            }
               return slow;
                    }
            }
            
         return NULL;
    }
    int main(){
        
        return 0;
    }
