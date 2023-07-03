#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	// s1-s2=x
	// a-b= (s1)^2-(s2)^2= (s1-s2)(s1+s2)=y
	// s1+s2=(a-b)/x OR (y)/(x)=z
	

	// now we have 
	// s1-s2=x
	// s1+s2=z
	
	// 2s1=x+z
	// s1=(x+z)/2
	
	// s2=s1-x

	long long s1=0;
	long long s2=0;

	long long a=0;
	long long b=0;
	for(int i=0;i<n;i++){
		s1+=arr[i];
		a+=arr[i]*arr[i];
	}

	s2=((n)*(n+1))/2;
	b=(n*(n+1)*(2*n+1))/6;
	
	// cout<<"s1:"<<s1<<endl;
	// cout<<"s2:"<<s2<<endl;
	// cout<<"a:"<<a<<endl;
	// cout<<"b:"<<b<<endl;
   long long x=s1-s2;
   long long y=a-b;
   
   // long long z=s1+s2
   long long  z=y/x;
//    cout<<"z:"<<z<<endl;
   	// now we have 
	// s1-s2=x
	// s1+s2=z
	
	// 2s1=x+z
	// s1=(x+z)/2
	
	long long duplicate=(x+z)/2;
	// cout<<"duplicate:"<<duplicate<<endl;
	
	long long missing=duplicate-x;
	// cout<<"missing:"<<missing<<endl;
	return {missing,duplicate};
   
   

   
	
	
}
