/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next;
            if(fast->next==NULL){
                return NULL;
            }
            fast=fast->next;
            if(slow==fast){
                slow=head;
                while(slow!=fast){
                    slow=slow->next;
                    fast=fast->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};

//second approach 
 if(head==NULL){
            return NULL;
        }
        Node* prev=NULL;
        Node* curr=head;
        Node* after=NULL;

        //reverse first k nodes
        int cnt=0;
        while(curr!=NULL && cnt<k){
            after=curr->next;
            curr->next=prev;
            prev=curr;
            curr=after;
            cnt++;
        }
        if(after!=NULL){
            head->next=kReverse(after,k);
        }
        return prev;
