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
    void reorderList(ListNode* head) {
 if (!head || !head->next)
        return;

    deque<ListNode*> nodes;
    ListNode* current = head;
    while (current) {
        nodes.push_back(current);
        current = current->next;
    }

    ListNode* newHead = nodes.front();
    ListNode* tail = newHead;
    nodes.pop_front();

    bool fromFront = false;
    while (!nodes.empty()) {
        ListNode* nextNode = fromFront ? nodes.front() : nodes.back();
        if (fromFront)
            nodes.pop_front();
        else
            nodes.pop_back();

        tail->next = nextNode;
        tail = tail->next;
        fromFront = !fromFront;
    }
    tail->next = nullptr;
    head = newHead;
    }
};