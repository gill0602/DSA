class Solution {
    private:
    bool isPrime(int n){
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>> ans;
        for(int i=2;i<=n/2;i++){
            if(isPrime(i) && isPrime(n-i)){
                ans.push_back({i,n-i});
            }
        }
        return ans;
    }
};