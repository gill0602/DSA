#include <bits/stdc++.h> 

void sortedInsert(stack<int>& st,int ele){
	if((!st.empty() && ele>st.top()) || st.empty()){
		st.push(ele);
		return;
	}
	int num=st.top();
	st.pop();
	sortedInsert(st,ele);
	st.push(num);
}
void sortStack(stack<int> &stack)
{
	// Write your code here
	if(stack.empty()){
		return;
	}
	int num=stack.top();
	stack.pop();
	sortStack(stack);
	sortedInsert(stack,num);
}