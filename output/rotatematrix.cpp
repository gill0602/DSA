
//rotate anticlockwise
vector<vector<int>> rotateMatrix(vector<vector<int>> &matrix)
{
        int n=matrix.size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        int k;
        for(int i = 0; i < n; i++){
            k = n-1;
            for(int j = 0; j < k; j++){
                swap(matrix[j][i], matrix[k][i]);
                k--;
            }
        }



    return matrix;
}
//rotate clockwise

// code to rotate the matrix to clock wise 90 degrees.

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        
        // transpose
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }  
		
		
        // row reverse code below
        int k;
        for(int i = 0; i < n; i++){
            k = n-1;
            for(int j = 0; j < k; j++){
                swap(matrix[i][j], matrix[i][k]);
                k--;
            }
        }
    }
};
