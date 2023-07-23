// Set not contain duplicate elements
// time for insertion of element in the set is O(nlogn )


// Time Complexity = O(n2)
// Space complexity =O(n)
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int countMajority = nums.size()/3;
        unordered_set<int> set;
        vector<int> output;
        for(auto num : nums){
            int count = 0;
            for(auto element : nums){
                if(element == num){
                    count++;
                }
            }
            if(count > countMajority){
                set.insert(num);
            }
        }
        for(auto it = set.begin(); it != set.end(); it++){
            output.push_back(*it);
        }
        return output;
    }
};