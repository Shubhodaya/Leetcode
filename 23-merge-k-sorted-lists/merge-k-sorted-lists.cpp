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
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        priority_queue<pair<int,ListNode*>, vector<pair<int,ListNode*>>, greater<pair<int,ListNode*>>>pq;

if(lists.size()==0)return nullptr;
        for( ListNode* it : lists){
 if(it)pq.push({it->val,it});
        }

        ListNode* dummy = new ListNode();
        ListNode* temp=dummy;

        while(!pq.empty()){
pair<int,ListNode*> p =pq.top();
pq.pop();
if(p.second->next)pq.push({p.second->next->val,p.second->next});

temp->next=p.second;
temp=temp->next;

        }
return dummy->next;
        
        
    }
};