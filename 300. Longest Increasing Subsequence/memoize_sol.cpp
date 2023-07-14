// Time complexity  = O(n2)
// space complexity =O(n2)

class Solution {
public:

    int helper(int ind , int prev,vector<int>& nums, int n , vector<vector<int>> &dp ){

       
        // base case
        if(ind ==n) return 0;

         if(dp[ind][prev+1]!=-1) return dp[ind][prev+1];

        // not incude 
        int l=0+helper(ind +1,prev,nums,n,dp);

        // include 
        // in two case , when it is the first element or whene curr el is greater ///than previous element

        if(prev==-1 || nums[ind]>nums[prev])  l=max(l,(1+helper(ind+1 ,ind, nums , n,dp)));

        return dp[ind][prev+1]=l;

    }
    int lengthOfLIS(vector<int>& nums) {
          int n =nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
      
        return helper(0,-1,nums,n,dp);
    }
};