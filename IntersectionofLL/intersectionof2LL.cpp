class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = 0 , lenB = 0;
        ListNode* tempA = headA;
        while(tempA!=NULL){
            lenA++;
            tempA = tempA->next;
        }
        ListNode* tempB = headB;
        while(tempB!=NULL){
            lenB++;
            tempB = tempB->next;
        }
        tempA = headA;
        tempB = headB;
        if(lenA>lenB){
            for(int i = 1;i<=lenA-lenB;i++){
                tempA = tempA->next;
            }
            while(tempA!=tempB){
                tempA = tempA->next;
                tempB = tempB->next;
            }
            return tempA;
        }
        else{
            for(int i = 1;i<=lenB-lenA;i++){
                tempB = tempB->next;
            }
            while(tempB!=tempA){
                tempA = tempA->next;
                tempB = tempB->next;
            }
            return tempA;
        }
    }
};
