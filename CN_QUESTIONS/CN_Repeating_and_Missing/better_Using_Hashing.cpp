// Time Complexity = O(2n)
// Space Complexity =O(n)
#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	// Using  Hashing
	int missing=-1;
	int repeating =-1;
	int hash[n+1]={0};
	for(int i=0;i<n;i++){
		hash[arr[i]]++;
	}
	
	for(int i=1;i<=n;i++){
		if(hash[i]==0) missing=i;
		if(hash[i]==2) repeating=i;
	}
	
	if(missing !=-1 && repeating!=-1) return {missing , repeating};
	else return {-1,-1};
}
