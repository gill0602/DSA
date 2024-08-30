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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* before=head;
        ListNode* tmp=head;
        ListNode* after=head->next;
        while(after){
            while(before->val==after->val){
                after=after->next;
                if(after==NULL){
                    if(before==head && after==NULL){
                        return NULL;
                    }
                    tmp->next=NULL;
                    return head;
                }
                if(before->val!=after->val){
                    if(before==head){
                        head=after;
                    }
                    before=tmp;
                    tmp->next=after;
                }
            }
            tmp=before;
            before=after;
            after=after->next;
        }
        return head;
    }
};