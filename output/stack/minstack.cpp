#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	// Write your code here.
	stack<int> st;
	int mini;
	
	public:
		
		// Constructor
		minStack() 
		{ 
			// Write your code here.
			
			mini=INT_MAX;
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
			if(st.empty()){
				st.push(num);
				mini=num;
			}
			else{
				if(num<mini){
					int val=2*num-mini;
					st.push(val);
					mini=num;
				}
				else{
					st.push(num);
				}
			}
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
			if(st.empty()) return -1;
			else{
				int curr=st.top();
				st.pop();
				if(curr<mini){
					int prevMin=mini;
					int val=2*mini-curr;
					mini=val;
					return prevMin;
				}
				else{
					return curr;
				}
			}
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
			if(st.empty()) return -1;
			else if(st.top()>=mini){
				return  st.top();
			}
			else{
				return mini;
			}
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			// Write your code here.
			if(st.empty()) return -1;
			else{
				return mini;
			}
		}
};