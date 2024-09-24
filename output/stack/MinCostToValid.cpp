//min cost to make the string valid 
#include <bits/stdc++.h> 
int findMinimumCost(string str) {
  // Write your code here
  int n=str.size();
  if(n%2!=0) return -1;
  stack<char> s;
  for(int i=0;i<n;i++){
    char ch=str[i];
    if(ch=='{'){
      s.push(ch);
    } 
    else {
      if (!s.empty() && s.top() == '{'){
        s.pop();
      }
      else{
        s.push(ch);
      }
    }
  }
  int a=0,b=0;
  while(!s.empty()){
    char ch=s.top();
    if(ch=='{') a++;
    else b++;
    s.pop();
  }
  return (a+1)/2 + (b+1)/2;
}