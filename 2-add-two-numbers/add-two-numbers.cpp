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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {


        ListNode* pt=new ListNode();
    ListNode* pt1=pt;
    int c=0;
        while(l1 && l2){
           
            ListNode* nnode=new ListNode();
             pt->next=nnode;
            int sum=l1->val+l2->val+c;
            c=sum/10;
            nnode->val=sum%10;
            l1=l1->next;
            l2=l2->next;
              pt=pt->next;
            
        }

        while(l1){
               
            ListNode* nnode=new ListNode();
                 pt->next=nnode;
                int sum=l1->val+c;
            c=sum/10;
            nnode->val=sum%10;
            l1=l1->next;
              pt=pt->next;
        }

                while(l2){
           ListNode* nnode=new ListNode();
                 pt->next=nnode;
                int sum=l2->val+c;
            c=sum/10;
            nnode->val=sum%10;
            l2=l2->next;
              pt=pt->next;
        }

        if(c){
              ListNode* nnode=new ListNode();
                    pt->next=nnode;
                  nnode->val=c;   
        }

        return pt1->next;
        
    }
};