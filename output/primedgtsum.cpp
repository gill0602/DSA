#include <bits/stdc++.h> 
int digit_sum(int x){
    int sum=0;
    while(x>0){
        sum+=(x%10);
        x/=10;
    }
    return(sum);
}

int primeDigitSum(int l, int r) {
    // Write your code here.
    vector<int> ans;
	 vector<bool> prime(r+1,true);
    prime[0]=false;
    prime[1]=false;
	 for(int i=2;i*i<=r;i++){
		 if(prime[i]){
			 for(int j=i*i;j<=r;j+=i){
				 prime[j]=false;
			 }
		 }
	 }
     int cnt=0;
	 for(int i=l;i<=r;i++){
        int check_sum=digit_sum(i);
        if(prime[check_sum]){
            cnt++;
        }
	 }
	 return(cnt);
}