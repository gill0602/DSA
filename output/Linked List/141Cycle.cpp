class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL){
            return false;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            if(fast->next->next==NULL){
                return false;
            }
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
    }
};