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
    ListNode* deleteDuplicates(ListNode* head) {
     
      ListNode* temp=head;
      if(temp==NULL){
        return head;
      }
      ListNode*Next=temp->next;
    
      while(Next!=NULL){
      if(temp->val==Next->val){
        temp->next=Next->next;
      } 
      else{
        temp=Next;
      }
      Next=Next->next;
      }
      return head;
    }
};