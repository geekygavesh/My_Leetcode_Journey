class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* Next = head;
        while(curr!=NULL){
            Next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = Next;
        }
        return prev;
    }
};


// class Solution {          ///    recursive
// public:              
//     ListNode* reverseList(ListNode* head) {
//         if(head==NULL || head->next==NULL) return head;
//         ListNode* newhead = reverseList(head->next);
//         head->next->next = head;
//         head->next = NULL;
//         return newhead;
//     }
// };



