class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int cnt=0;
        int lastIdx[3]={-1,-1,-1};
        for(int i=0;i<n;i++){
            lastIdx[s[i]-'a']=i;
            cnt=cnt+1+min({lastIdx[0],lastIdx[1],lastIdx[2]});
        }
        return cnt;
    }
};