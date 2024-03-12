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
    ListNode* removeZeroSumSublists(ListNode* head) {

        ListNode* dummy= new ListNode(0,head);
       
        // dummy->next=head;
      map<int,ListNode*>mp;
     
     ListNode* curr=head;
        
        int prefix=0;
     while(curr){
         prefix +=curr->val;
         mp[prefix]=curr;
        curr=curr->next;
     }
     curr=dummy;
    //  if(mp[0])dummy->next=mp[0]->next;
    //  else dummy->next=head;

    prefix=0;

     while(curr){

prefix +=curr->val;

     if(mp[prefix]) curr->next=mp[prefix]->next;
      curr=curr->next; 
 

     }
 return dummy->next;

        
        
    }
};