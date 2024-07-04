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
    ListNode* mergeNodes(ListNode* head) {

        int s=0;
        ListNode* h1=new ListNode();
        ListNode* h2;

        h2=h1;
        while(head){
s=0;
while(head->val!=0){
s+=head->val;
head=head->next;
}

if(s!=0){
h1->next=new ListNode(s);
h1=h1->next;
}
head=head->next;
        }

      return h2->next;  
    }
};