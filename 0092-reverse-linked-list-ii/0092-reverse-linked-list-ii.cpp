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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head || left == right)return head;

 ListNode* dummy = new ListNode();
 dummy->next=head;

 ListNode* leftpre = dummy;
 ListNode* curr=head;

 for( int i=0;i<left-1;i++){
    leftpre=leftpre->next;
    curr=curr->next;
 }

 ListNode* pt1=curr;
 ListNode* pt= curr;

ListNode* prev=curr;


for( int i=0;i<=(right-left);i++){
ListNode* nextnode=curr->next; 
 curr->next=prev;
 prev=curr;
 curr=nextnode;
//  nextnode=curr->next;

}

leftpre->next=prev;
pt->next=curr;

return dummy->next;
    }

};