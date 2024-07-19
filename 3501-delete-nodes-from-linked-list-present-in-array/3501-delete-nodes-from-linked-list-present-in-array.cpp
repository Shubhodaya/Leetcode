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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int>st;
        for( auto it: nums)st.insert(it);

        ListNode* hn= new ListNode();
        hn->next=head;
        ListNode* prsnt=head;
        ListNode* prev=hn;

        while(prsnt){

            while(prsnt!=nullptr && st.find(prsnt->val)!=st.end()){
prsnt=prsnt->next;
            }

            prev->next=prsnt;
            if(prsnt!=nullptr){
            prev=prsnt;
            prsnt=prsnt->next;

        }
        }

return hn->next;

        
    }
};