// Brute force 
// Time Complexity =O(n)

class Solution {
public:
    double myPow(double x, int n) {
        
        double ans=1;
        bool fraction=false;
        if(n<0) 
        {
            fraction=true;
            n=-1*n;
        }
        if(n==0) return 1;
         cout<<"n:"<<n<<endl;
        while(n>0){
            ans=ans*x;  
            n--;      
        }
       cout<<"ans:"<<ans<<endl;
        if(fraction) return 1/ans;
        else return ans;
    }
   
};