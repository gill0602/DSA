class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* tmp=head;
        ListNode* ptr=tmp;
        while(ptr){
            if(tmp->val==ptr->val){
                if(ptr->next==NULL){
                    tmp->next=NULL;
                    break;
                }
                ptr=ptr->next;
            }
            else{
                tmp->next=ptr;
                tmp=tmp->next;
            }
        }
        return head;
    }
};