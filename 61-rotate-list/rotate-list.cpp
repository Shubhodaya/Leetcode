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
    ListNode* rotateRight(ListNode* head, int k) {
        
        int l=0;
        ListNode* p=head;
        while(p){
            l++;
            p=p->next;
        }
  if(l<2)return head;
        k= k%l;
        cout<<k<<endl;
      
        ListNode* q=head;
        ListNode* w=head;

        while(k--){
            q=q->next;
        }
 while(q->next){
    q=q->next;
    w=w->next;
 }
//  cout<<q->val<<" "<<w->val<<endl;


q->next=head;
ListNode* ans=w->next;
w->next=nullptr;

return ans;
    }
};