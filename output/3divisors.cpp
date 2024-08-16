#include <bits/stdc++.h> 
//O(sqrt(n)*log(log(sqrt(n)))) time complexity
vector<int> threeDivisors(int n) {
    // Write your code here
    int m=sqrt(n);
    vector<int> sieve(m+1,true);
    for(int i=2;i*i<=m;i++){
        if(sieve[i]){
            for(int j=i*i;j<=m;j=j+i){
                sieve[j]=false;
            }
        }
    }
    vector<int> result;
    for(int i=2;i<=m;i++){
        if(sieve[i]){
            result.push_back(i*i);
        }
    }
    return result;
}