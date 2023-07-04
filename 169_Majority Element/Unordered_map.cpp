// Time Complexity =O(n)
// space Complexity =O(n)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> a;
        for(auto i:nums) a[i]++;
         
        int maxval=INT_MIN;
        int ans;
        for(auto x:a)
        {
            cout<<"x.first:"<<x.first<<endl;
            cout<<"x.second:"<<x.second<<endl;
            if(x.second>maxval){
                maxval=x.second;
                ans=x.first;
            }
        }
        return ans;
    }
};