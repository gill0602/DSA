#include <bits/stdc++.h> 
vector<vector<int>> traverseDiagonally(vector<vector<int>> arr, int row, int col) {
    // Write your code here.
    vector<vector<int>> ans;
    for(int i=0;i<row;i++){
        vector<int> temp;
        int j=0,k=i;
        while( k>=0 && j<col){
            temp.push_back(arr[k][j]);
            k--;
            j++;
        }
        ans.push_back(temp);
    }
    for (int j = 1; j < col; j++) {
        vector<int> temp;
        int i=row-1,k=j;
        while(i>=0 && k<col){
            temp.push_back(arr[i][k]);
            i--;
            k++;

        }
        ans.push_back(temp);
    }
    return ans;
}