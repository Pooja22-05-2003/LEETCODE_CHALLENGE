// Time Complexity = O(n*m)
// Space Complexity = O(1)

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // row[m] --> matrix[0][...]
        //col[n]---> matrix[...][0]
        int n=matrix.size();
        int m=matrix[0].size();
        int col0=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    // mark the ith row
                        matrix[i][0]=0;

                    // mark the ith col
                    if(j!=0) matrix[0][j]=0;
                    else col0=0;
                        

                }
            }
        }


        // without touching first row and first col of matrix which we used as reference for row and col to prevent space , we will handle remaining places
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[i][j]!=0){
                    if(matrix[0][j]==0 || matrix[i][0]==0) matrix[i][j]=0;
                }
            }
        }


        // handling first matrix[0][0] case
        // 
        if(matrix[0][0]==0){
            // means all row el should be 0
            for(int k=0;k<m;k++){
                matrix[0][k]=0;
            }

        }

        if(col0==0){
            for(int k=0;k<n;k++){
            matrix[k][0]=0;
            }
        }
    }
};