// brute force 
// Time Complexity =O(N3)
// SC=O(1)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_cnt=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int sum=0;
                for(int k=i;k<=j;k++){
                    sum+=nums[k];
                }
                max_cnt=max(sum,max_cnt);
             

            }
        }
        return max_cnt;
    }
};