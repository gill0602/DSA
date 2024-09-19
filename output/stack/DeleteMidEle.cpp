//delete mid element of the stack cpp solution
#include <bits/stdc++.h>
void solve(stack<int>& st,int cnt,int size){
   if(cnt==size/2){
      st.pop();
      return;
   }
   int ele=st.top();
   st.pop();

   //recursive call
   solve(st,cnt+1,size);

   st.push(ele);
} 

void deleteMiddle(stack<int>&st, int N){
	
   // Write your code here
   int cnt=0;
   solve(st,cnt,N);
   
}