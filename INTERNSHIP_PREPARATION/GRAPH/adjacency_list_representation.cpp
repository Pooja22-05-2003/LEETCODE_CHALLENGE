// Time Complexity :
// Space Complexity : O(2E) [Undirected Graphs] (twice of edges)(because every edge has 2 nodes)
//  For directed Graphs = Space Complexity =O(E)


/*

-> We use 1 based indexing grpah
-> we create array of n+1 size
-> This array will contain list and In c++ list is nothing but vector of int

-> Motive of adjacency list 
-> on nodes will store all its neighbours




*/

#include <bits/stdc++.h>
using namespace std;


int main(){
     // n is number of nodes/ vertex
    cout<<"Enter n(number of nodes) : ";
    int n ; cin>>n;

    // m is number of edges
    cout<<"Enter m (number of edges) : ";
    int m ; cin>>m;

    // vector<int> adj[n+1];: This creates an array of vectors, where each vector can hold integers. The size of the array is 
    // determined by n+1, and each element of the array is a separate vector. This is known as a "vector of vectors" or a 2D vector.
    vector<int> adj[n+1];

      for(int i=0;i<m;i++){
        cout<<"Enter "<<i<<" th nodes u and v"<<endl;
        int u,v;
        cin>>u>>v;

        // **** If weights are also given for the graph , then instead of simply storing the adjacent nodes , store in pairs
        //  and store adjacent node and weights both .
        // In pairs , first value is node value and the second value weight corresponding to it .
        // 4-> {(2,1),(3,4)}
        adj[u].push_back(v);

        // if graph is undirected then comment down the below line
        adj[v].push_back(u);
        }


   


    return 0;
}

