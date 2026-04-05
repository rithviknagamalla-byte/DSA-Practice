/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
       ListNode*curr=head;
       ListNode*slow=curr;
       ListNode*fast=curr;
       
       while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
       }
       
       if(fast!=NULL){
        slow=slow->next;
       }
     

      ListNode*prev=NULL;
      ListNode*cur=slow;
      ListNode*next;
      while(cur!=NULL){
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
      }
    ListNode*first=head;
      ListNode*second=prev;
      
      
      while(second!=NULL){
        if(first->val!=second->val){
            return false;
        }
        first=first->next;
        second=second->next;
      }
       return true;
    }
};