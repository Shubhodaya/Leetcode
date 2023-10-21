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
    ListNode* middleNode(ListNode* head) {
    //     ListNode* f= head;
    //     ListNode* s= head;


    //    while(f && f->next){

    //     s=s->next;
    //     f=f->next->next;

    //    }

    //  return s;

    ListNode* count=head;
int c=0;
    while(count){
        c++;
        count=count->next;
    }

    c=(c)/2;

    while(c--){
        head=head->next;
    }

    return head;

        
    }
};