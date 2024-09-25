class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        unordered_map<char,int> mp;
        int start=0,end=0,ans=0;
        for(end=0;end<n;end++){
            mp[s[end]]++;
            while(mp[s[end]]>1 && start<end){
                mp[s[start]]--;
                start++;
            }
            ans=max(ans,end-start+1);
        }
        return ans;
    }
};