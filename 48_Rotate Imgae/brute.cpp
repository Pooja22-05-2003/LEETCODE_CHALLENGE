// brute force 
// Time Complexity =O(n2)
// Space Complexity =O(n2)
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n =matrix.size();
        vector<vector<int>> temp(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                temp[j][(n-1)-i]=matrix[i][j];
            }
        }

        // copying the temp matirx to original matrix

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[i][j]=temp[i][j];
            }
        }

    }
};