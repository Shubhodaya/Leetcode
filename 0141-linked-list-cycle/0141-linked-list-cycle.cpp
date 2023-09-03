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
    bool hasCycle(ListNode *head) {
    //     unordered_map<ListNode*,bool>mp;
    //    ListNode* ptr =head;
       


    //    while(ptr){
           
    //        if(mp[ptr])return true;
    //        else{
    //            mp[ptr]=true;
    //            ptr=ptr->next;

    //        }
    //    }

    //    return false;


       ListNode* s =head;
       ListNode* f =head;

if(!head)return false;

       while(f->next && f->next->next){

        s=s->next;
        f=f->next->next;

        if(s==f)return true;    


       
       }

       return false;
        
        
        
    }
};