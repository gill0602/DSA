class Solution {
public:
    int minimumLength(string s) {
        int n=s.size();
        int start=0,end=n-1;
        while(start<end){
            if(s[start]==s[end]){
                char c=s[start];
                while(s[start]==c && start<=end){
                    start++;
                }
                while(s[end]==c && start<=end){
                    end--;
                }
            }
            else{
                break;
            }

        }
        if(start>end){
            return 0;
        }
        return end-start+1;
    }
};