class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool flag = false;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow -> next;
            fast = fast->next->next;       /// fast ko 3x 4x kuch b kr skte
            if(slow==fast) {
                flag = true;
                break;
            }
        }
        if(flag==false) return NULL;
        ListNode* temp = head;
        while(temp!=slow){
            temp = temp->next;
            slow = slow->next;
        }
        return slow;
    }
};
