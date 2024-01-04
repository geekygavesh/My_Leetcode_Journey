class Solution {
public:
    void deleteNode(ListNode* tar) { 
        tar->val = tar->next->val;   // copy agle wale ki value (note this one)
        tar->next = tar->next->next;  // deleting next node(ye hmesha chlega)
    }
};
