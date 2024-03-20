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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        
        ListNode* l2= list2;

        while(l2->next)l2=l2->next;

        ListNode* p1=list1; ListNode*p2=list1;

        int x=a-1;

        while(x>=0 && x--){
p1=p1->next;
        }

        while(b--)p2=p2->next;


        p1->next=list2;
        if(p2->next)l2->next=p2->next;

        return list1;
    }
};