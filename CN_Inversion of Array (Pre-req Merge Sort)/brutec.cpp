/* 
    Time Complexity : O(N ^ 2)
    Space Complexity : O(1)

    Where 'N' is the total number of elements in the array/list.
*/

// brute force
#include <bits/stdc++.h> 
long long getInversions(long long *arr, int n){
    // Write your code here.
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]) cnt++;
        }
    }
    return cnt;


}