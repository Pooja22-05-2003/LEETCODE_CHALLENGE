// first brute force

// Usinf 2 for loops 
// maintainf frequence of each element and return the element having largest frequency 


// Using SORTING ALGORITHM
// Better Approach 
// Time Complexity =O(nlogn)


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n =nums.size();
        sort(nums.begin(), nums.end());
        return nums[n/2];
   
        
    }
};