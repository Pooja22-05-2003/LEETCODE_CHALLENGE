// Time Complexity = O(n2)
// Space complexity =O(1)

// using 2 for loops

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	// Using  Hashing
	int missing=-1;
	int repeating =-1;
	for(int i=1;i<=n;i++){
        int cnt=0;
		
        for(int j=0;j<n;j++){

          if (arr[j] == i) {
            cnt++;
		
          }
        }
        if(cnt==2) repeating=i;
        if(cnt==0) missing=i;
		if(missing !=-1 && repeating!=-1) return {missing , repeating};
    }
	
	return {-1,-1};
}