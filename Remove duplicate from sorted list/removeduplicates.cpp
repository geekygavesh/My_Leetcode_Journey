class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* a = head;
        ListNode* b = head->next;
        while(b!=NULL){
            while(b!=NULL && b->val==a->val){
                b = b->next;  // jb tk duples h to aage bdhate rho 
            }
            a->next = b;   // this step signifies deletion of extra nodes
            a = b;  // aage bdha rhe a ko deln ke baad
            if(b!=NULL) b = b->next;
        }
        return head;
    }
};
