// Time Complexity =O(nlogn)
// Space Complexity =O(n)

#include <bits/stdc++.h> 

int merge(long long * arr , int s , int mid , int e){
    int a[10000000];
    int cnt=0;
    int i=s;
    int j=mid+1;
    int k=0;
    while(i<=mid && j<=e){
        if(arr[i]>arr[j]){
            cnt+=mid-i+1;
            a[k]=arr[j];
            j++;
            k++;
        }
        else {
           
            a[k]=arr[i];
            i++;
            k++;
         
        }
    }

    while(i<=mid){
        a[k]=arr[i];
            i++;
            k++;
    }

    while(j<=e){
        a[k]=arr[j];
            j++;
            k++;
    }

    // HERE keep check u need to use x-s 
 for (int x = s; x <= e; x++) {
        arr[x] = a[x - s];
    }


    return cnt;
}


int mergesort(long long * arr,int s,int e){
    int cnt=0;
    if(s>=e) return cnt;
    int mid=(s+e)/2;
    cnt+=mergesort(arr,s,mid);
    cnt+=mergesort(arr,mid+1,e);
    cnt+=merge(arr,s,mid,e);
    return cnt;
}

long long getInversions(long long *arr, int n){
    // Write your code here.
    int s=0;
    int e=n-1;
    return mergesort(arr,s,e);
}