#include <bits/stdc++.h> 
int largestPrimeFactor(int n) {
    // Write your code here
    // o(sqrt(n)) time complexity
    if(n<2) return -1;
    int ans=0;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            ans=max(ans,i);
            n=n/i;
        }
    }
    if(n>1){
        ans=n;
    }
    return ans;
}