// 











// you can also use imports, for example:
// import java.util.*;

// you can write to stdout for debugging purposes, e.g.
// System.out.println("this is a debug message");

class Solution {
    public int solution(int N, int[] A, int[] B) {
        // Implement your solution here
        int []arr=new int[N];
        int []arr1=new int[A.length+1];
        int sum=0;
        int temp=N;

        for(int i=0;i<A.length;i++){
            arr[A[i]-1]++;
               arr[B[i]-1]++;
        }

        for(int i=0;i<N;i++){
            arr1[arr[i]]++;
        }

        for(int i=A.length;i>0;i--){
            sum+=((2*temp*arr1[i]-arr1[i]*arr1[i] +arr1[i])/2)*(i);
            temp-=arr1[i];
        }
        return temp;
    }
}
