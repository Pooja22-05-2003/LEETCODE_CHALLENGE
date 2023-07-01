// Dutch Algorithm 
// Time Complexity = O(N)
// Space Complexity = O(1)

class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n =arr.size();
        int low=0;
        int mid=0;
        int high=n-1;

        // [mid to high] (will contail our unsorted array  )
        while(mid<=high){

            if(arr[mid]==0){
                swap(arr[low],arr[mid]);
                mid++;
                low++;
            }
            else if(arr[mid]==1){
                mid++;
            }
            else{
                swap(arr[mid],arr[high]);
                high--;
            }
        }


    }
};