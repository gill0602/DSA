// Longest repeating character replacement
class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        unordered_map<char,int> mp;
        int start=0,end=0,ans=0,maxl=0;
        for(end;end<n;end++){
            mp[s[end]]++;
            maxl=max(maxl,mp[s[end]]);
            while(end-start+1-maxl>k){
                mp[s[start]]--;
                start++;
            }
            ans=max(ans,end-start+1);
        }
        return ans;    
    }
};