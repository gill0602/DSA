class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i=0;
        for(i;i<=30;i++){
            int ans=pow(2,i);
            if(ans==n){
                return true;
            }
        }
        return false;
    }
};