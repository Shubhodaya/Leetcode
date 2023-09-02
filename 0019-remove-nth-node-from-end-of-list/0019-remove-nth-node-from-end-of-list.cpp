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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c=0;

        ListNode* dummy= head;

        while(dummy){
            c++;
            dummy =dummy->next;
        }
        
        int k= c-n;

        if(k==0){
            ListNode* newHead = head->next;
            delete(head);
            return newHead;
        }

        int p=0;
        dummy=head;
        ListNode* newHead = dummy;
    

        while(dummy){
              p++;

            if(p==k){
                dummy->next= dummy->next->next;
            }

            dummy=dummy->next;
          
        }

        return head;




        
    }
};