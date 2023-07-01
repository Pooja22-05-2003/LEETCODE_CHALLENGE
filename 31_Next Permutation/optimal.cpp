// Time Complexity = O(3n)
// we are modifying the array , if the interviewer allows then SC= O(1)
// else space complexity = O(N)

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // inbuilt stl in c++
    //    next_permutation(nums.begin(),nums.end());

    int ind=-1;
    int n =nums.size();
   
    // IMPLEMENTATION OF THIS STL 
    for(int i=n-2;i>=0;i--){
        // we want to find first decline where our array start decreasing
        if(nums[i]<nums[i+1]){
            ind=i;
            break;
        }
    }

    // if this condition satisfy , then it means that our array is the last permautaion , so we reverse the array and the first one is the next permutation
    if(ind==-1){
        reverse(nums.begin(),nums.end());
        return ;
    }
    else {
        // now start finding the element just greater(means ammong all possible , it must be smaller) than arr[ind] and swap that .
        for(int p=n-1;p>=0;p--){
            if(nums[p]>nums[ind]){
                swap(nums[ind],nums[p]);
                break;
            }
        }
    }

    // now the remaining array after the ind wala position is in decreasing order , so we just reverse it 
    reverse(nums.begin()+ind+1,nums.end());
    
    }
};