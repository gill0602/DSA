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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        std::unordered_map <int,ListNode*> prefix_sums;
        ListNode* curr=head;
        prefix_sums[0]=dummy;
        int prefixSum=0;
        while(curr){
            prefixSum=prefixSum + curr->val;
            if(prefix_sums.find(prefixSum)!=prefix_sums.end()){
                ListNode * to_delete=prefix_sums[prefixSum]->next;
                int temp_sum=prefixSum + to_delete->val;
                while(to_delete!=curr){
                    prefix_sums.erase(temp_sum);
                    to_delete=to_delete->next;
                    temp_sum=temp_sum +to_delete->val;
                }
                prefix_sums[prefixSum]->next=curr->next;
            }
            else{
                prefix_sums[prefixSum]=curr;
            }
            curr=curr->next;
        }
        return dummy->next;
        
    }
};