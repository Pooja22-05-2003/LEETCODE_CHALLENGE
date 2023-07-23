// Boyer-Moore Voting Algorithm
// Time Complexity=O(2n)
// Space Complexity =O(1)
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
     int cnt1=0;
     int cnt2=0;
      int el1;
      int el2;
      int n =nums.size();
      
      for(int i=0;i<n;i++){
          if(cnt1==0 && nums[i]!=el2){
              cnt1++;
              el1=nums[i];
          }
          else if(cnt2==0 && nums[i]!=el1){
              cnt2++;
              el2=nums[i];
          }
          else if(nums[i]==el1) cnt1++;
          else if(nums[i]==el2) cnt2++;
          else {
              cnt1--;
              cnt2--;
          }
      }


      // checking if the element we found is the majority element or not
      
      int count1=0;
      int count2=0;
      for(int j=0;j<n;j++){
          if((nums[j])==el1) count1++;
          if(nums[j]==el2) count2++;
      }

      vector<int> ans;
      if(count1>n/3) ans.push_back(el1);
      if(count2>n/3) ans.push_back(el2);

      return ans;
    }
    
};