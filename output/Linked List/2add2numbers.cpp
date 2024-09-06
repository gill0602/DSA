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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy=new ListNode(0);
        ListNode *tmp=dummy;
        ListNode* ptr1=l1;
        ListNode* ptr2=l2;
        int carry=0;
        while(ptr1 && ptr2){
            int x=ptr1->val + ptr2->val + carry;
            carry= x/10;
            x=x%10;
            ListNode * ptr = new ListNode(x);
            tmp->next=ptr;
            tmp=tmp->next;

            ptr1=ptr1->next;
            ptr2=ptr2->next;
        }
        while(ptr1){
            int x=ptr1->val+carry;
            carry=x/10;
            x=x%10;
            ListNode * ptr=new ListNode(x);
            tmp->next=ptr;
            tmp=tmp->next;
            ptr1=ptr1->next;
        }
        while(ptr2){
            int x=ptr2->val+carry;
            carry=x/10;
            x=x%10;
            ListNode * ptr=new ListNode(x);
            tmp->next=ptr;
            tmp=tmp->next;
            ptr2=ptr2->next;
        }
        if(carry!=0){
            ListNode * ptr=new ListNode(carry);
            tmp->next=ptr;
        }
        return dummy->next;
    }
};