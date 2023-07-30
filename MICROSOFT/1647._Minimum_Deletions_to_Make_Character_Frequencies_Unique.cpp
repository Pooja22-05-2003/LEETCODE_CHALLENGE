/*


A string s is called good if there are no two different characters in s that have the same frequency.

Given a string s, return the minimum number of characters you need to delete to make s good.

The frequency of a character in a string is the number of times it appears in the string. For example, in the string "aab", the frequency of 'a' is 2, while the frequency of 'b' is 1.

 

Example 1:

Input: s = "aab"
Output: 0
Explanation: s is already good.
Example 2:

Input: s = "aaabbbcc"
Output: 2
Explanation: You can delete two 'b's resulting in the good string "aaabcc".
Another way it to delete one 'b' and one 'c' resulting in the good string "aaabbc".
Example 3:

Input: s = "ceabaacb"
Output: 2
Explanation: You can delete both 'c's resulting in the good string "eabaab".
Note that we only care about characters that are still in the string at the end (i.e. frequency of 0 is ignored).
 

Constraints:

1 <= s.length <= 105
s contains only lowercase English letters.



*/


// good= if no 2 character have same freq

// Time Complexity=O(1)
// Sapce Complexity =O(1)
class Solution {
public:
    int minDeletions(string s) {
    vector<int> arr(26,0);
    for(auto it : s){
        arr[it-'a']++;
    }

    sort(arr.begin(),arr.end(),greater<int>());
    int maxp=arr[0];
    int ans=0;
    
    for(auto it : arr){
   
        if(it!=0){
               
        if(it>=maxp ){
           if(maxp>0){
            int f=(it-maxp);
     
            ans+=f;
          }
           else
        {
             ans+=it;
           
        }

        }
        
        maxp=min(maxp-1,it-1);
        }

    }
  
    return ans;
        
    }
};