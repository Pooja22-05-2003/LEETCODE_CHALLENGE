// Time Complexity = O(n2)

class Solution {
public:
  // function that will  create nth row for us 
  vector <int> nthRow(int n){
      vector<int> temp;
      int ans=1;
      temp.push_back(1);
      for(int i=1;i<n;i++){
          ans=ans*(n-i);
          ans=ans/i;
          temp.push_back(ans);
      }

      return temp;

  }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int  i=1;i<=numRows;i++){
            vector<int>x;
            x=nthRow(i);
            res.push_back(x);
            x.clear();
        }

        return res;
    }
};