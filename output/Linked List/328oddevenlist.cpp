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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL){
        return head;
        }
        ListNode* odd=head;
        ListNode* eve=head->next;
        ListNode* link=head->next;
        while(eve!=NULL && eve->next!=NULL){
            odd->next=odd->next->next;
            eve->next=eve->next->next;
        
            odd=odd->next;
            eve=eve->next;
        }
    odd->next=link;
    return head;

    }
};