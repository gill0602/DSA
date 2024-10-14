// Non repeating characters in a stream
#include <bits/stdc++.h> 
vector<char> firstNonRepeating(string s) 
{
    // Write your code here
    unordered_map<char,int> mp;
    queue<char> q;
    vector<char> ans;
    int n=s.size();
    for(int i=0;i<n;i++){
        char ch=s[i];
        mp[ch]++;
        q.push(ch);
        while(!q.empty()){
            if(mp[q.front()]>1) q.pop();
            else{
                ans.push_back(q.front());
                break;
            }
        }
    }
    return ans;
}