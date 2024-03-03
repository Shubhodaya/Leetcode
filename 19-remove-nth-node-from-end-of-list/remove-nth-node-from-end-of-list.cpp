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

        

        ListNode* p =head;

        while(n--){
            p=p->next;
        }        

        ListNode* q=head;

        if(p==NULL)return head->next;

        while(p->next){
               q=q->next;
               p=p->next;
        }
 
 if(n==1){delete q->next;return head;}
           q->next=q->next->next;
           return head;

    }
};