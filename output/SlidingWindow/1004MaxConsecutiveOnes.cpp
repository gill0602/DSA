//My Approach
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
        int start=0,end=0,ans=0;
        for(end;end<n;end++){
            mp[nums[end]]++;
            if(mp[0]>k){
                while(mp[0]>k){
                    mp[nums[start]]--;
                    start++;
                }
            }
            ans=max(ans,end-start+1);
        }
        return ans;
    }
};
//Optimal Approach
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0;
        while(j<n){
            if(nums[j]==0){
                k--;
            }
            if(k<0){
                if(nums[i]==0){
                    k++;
                }
                i++;
            }
            j++;
        }
        return j-i;
    }
};