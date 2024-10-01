/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        set<ListNode*>mp1,mp2;

        ListNode *a=headA;
        ListNode *b=headB;
while(a){
mp1.insert(a);
a=a->next;
}

while(b){
if(mp1.find(b)!=mp1.end())return b;
b=b->next;
}
return NULL;
        
    }
};