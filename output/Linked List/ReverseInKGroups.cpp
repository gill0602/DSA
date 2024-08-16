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
    int length(ListNode* head){
        int cnt=0;
        ListNode* tmp=head;
        while(tmp!=NULL){
            cnt++;
            tmp=tmp->next;
        }
        return cnt;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        int len=length(head);
        if(k> len){
            return head;
        }
        //reverse first k nodes
        ListNode *prev=NULL;
        ListNode *curr=head;
        ListNode *after=NULL;
        int cnt=0;
        while(cnt<k){
            after=curr->next;
            curr->next=prev;
            prev=curr;
            curr=after;
            cnt++;
        }

        //recursive call for rest of the nodes
        if(curr){
            head->next=reverseKGroup(curr,k);
        }
        return prev;
    }
};