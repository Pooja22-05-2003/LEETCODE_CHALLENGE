// Optimal Approach 
// Time Complexity =O(N2)
// Space Complexity =O(1)
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n =matrix[0].size();
        // first transpose the matrix
        for(int i=0;i<=n-2;i++){
            for(int j=i+1;j<=n-1;j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        // second reverse each row
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};