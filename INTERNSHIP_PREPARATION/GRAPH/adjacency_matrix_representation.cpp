// Grpah representation in matrix way 

// Time Complexity =O(N)
// Space Complexity =O(N*N)

#include <bits/stdc++.h>
using namespace std;


int main(){
    // n is number of nodes/ vertex
    cout<<"Enter n(number of nodes) : ";
    int n ; cin>>n;

    // m is number of edges
    cout<<"Enter m (number of edges) : ";
    int m ; cin>>m;

    // graph here
    int adj[n+1][m+1];
    for(int i=0;i<m;i++){
        cout<<"Enter "<<i<<" th nodes u and v"<<endl;
        int u,v;
        cin>>u>>v;

        adj[u][v]=1;
        adj[v][u]=1;

    
    }

    return 0;
    
}