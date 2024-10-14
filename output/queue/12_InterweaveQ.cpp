class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
        vector<int> ans;
        queue<int> q2;
        int n=q.size();
        for(int i=0;i<n/2;i++){
            q2.push(q.front());
            q.pop();
        }
        while(!q.empty() && !q2.empty()){
            ans.push_back(q2.front());
            ans.push_back(q.front());
            q.pop();
            q2.pop();
        }
        return ans;
    }
};

// Using Stack

// Following are the steps to solve the problem: 



// Push the first half elements of the queue to stack. 

// Enqueue back the stack elements. 

// Dequeue the first half elements of the queue and enqueue them back. 

// Again push the first half elements into the stack. 

// Interleave the elements of queue and stack. 

// Without extra Space
#include <bits/stdc++.h> 
void interLeaveQueue(queue < int > & q) {
    // Write your code here.
    queue<int> q2;
    
    int n=q.size();
    for(int i=0;i<n/2;i++){
        q2.push(q.front());
        q.pop();
    }
    while(!q2.empty()){
        q.push(q2.front());
        q2.pop();
        q.push(q.front());
        q.pop();
    }
}