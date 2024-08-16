class Solution {
private : 
    bool isPrime(int n){
        if(n<=1){
            return false;
        }
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int maxPrime=0;
        int m=nums.size();
        int n=nums[0].size();
        for(int i=0;i<m;i++){
            int ele=nums[i][i];
            if(isPrime(ele)){
                maxPrime=max(maxPrime,ele);
            }
            int ele2=nums[i][n-1-i];
            if(isPrime(ele2)){
                maxPrime=max(maxPrime,ele2);
            }
        }
        return maxPrime;

    }
};