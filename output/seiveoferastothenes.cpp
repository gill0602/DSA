#include <bits/stdc++.h> 

vector < int > findAllPrimes(int n) 

{

    vector<bool>sieve(n+1,true);

    vector<int> ans;


 

    for(int i=2;i<=n;i++){

        if(sieve[i]==true){

            ans.push_back(i);

            for(int j=i*2;j<=n;j+=i){    

                sieve[j]=false;   

            }

        }

    }

    

    return ans;

}