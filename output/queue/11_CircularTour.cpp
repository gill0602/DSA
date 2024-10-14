// Leetcode 143
//First Approach
#include <bits/stdc++.h> 
int firstCircularTour(vector<int>& petrol, vector<int>& dist, int n)
{
	// write your code here
	long long int balance=0;
	long long int start=0,deficit=0;
	for(long long int i=0;i<n;i++){
		balance+=petrol[i]-dist[i];
		if(balance<0){
			deficit+=balance;
			start=i+1;
			balance=0;
		}
	}
	if(deficit+balance>=0) return start;
	else{
		return -1;
	} 
}