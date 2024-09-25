//Binary subarrays with sum
class Solution {

public:
    int numSubarraysWithSumAtMostK(vector<int>& nums,int goal){
        int n=nums.size();
        int start=0,sum=0,cnt=0;
        for(int end=0;end<n;end++){
            sum+=nums[end];
            while(start<=end && sum>goal){
                sum-=nums[start];
                start++;
            }
            cnt=cnt+(end-start+1);
        }
        return cnt;

    }
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return numSubarraysWithSumAtMostK(nums,goal)-numSubarraysWithSumAtMostK(nums,goal-1);
    }
};