class Solution {
public:
    int totalFruit(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int> mp;
        int start=0,end=0,ans=0;
        for(end;end<n;end++){
            mp[arr[end]]++;
            while(mp.size()>2){
                mp[arr[start]]--;
                if(mp[arr[start]]==0){
                    mp.erase(arr[start]);
                }
                start++;
            }
            int x=0;
            for(auto it:mp){
                x=x+it.second;
            }
            ans=max(ans,x);
        }
        return ans;
    }
};