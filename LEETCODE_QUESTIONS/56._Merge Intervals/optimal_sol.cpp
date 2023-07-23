// Time Complexity = O(nlogn)+O(n)
// space complexity = O(n)
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;

        for(int i=0;i<n;i++){

            // two conditions when we need to create new intervals
            if(ans.empty()|| ans.back()[1] <intervals[i][0]){
                ans.push_back(intervals[i]);
            }
            else {
             ans.back()[1]=max( ans.back()[1] , intervals[i][1]);
            }
        }
        return ans;
    }
};