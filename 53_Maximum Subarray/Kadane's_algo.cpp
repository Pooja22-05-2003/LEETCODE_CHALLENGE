// Kadane's Algorithm 
// Time Complexity = O(N)
// Space Complexity =O(1)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
        int n =nums.size();
        int sum=0;
    
        for(int i=0;i<n;i++){
            // cout<<"i: "<<i<<" sum:"<<sum<<endl;
            sum+=nums[i];
            if(sum>maxi) maxi=sum;
            // no need to carry negative sum , it will decrease our overall sum , so its better to initalize it with 0
            if(sum<0){
                sum=0;

            }
        }
        return maxi;
    }
};