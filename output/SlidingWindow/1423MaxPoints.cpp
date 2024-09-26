class Solution {
public:
    int maxScore(vector<int>& pts, int k) {
        int n=pts.size();
        int lsum=0;
        for(int i=0;i<k;i++){
            lsum=lsum+pts[i];
        }
        int mxsum=lsum,rsum=0,j=n-1;
        for(int i=k-1;i>=0;i--){
            rsum=rsum+pts[j];
            j--;
            lsum=lsum-pts[i];
            mxsum=max(mxsum,lsum+rsum);
        }
        return mxsum;
    }
};