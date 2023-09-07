/*
Time Complexity:

Initializing the adjacency list: The code initializes an empty adjacency list for each vertex. This takes O(n) time, where n is the number of vertices.

Building the adjacency list: The code takes input for the edges and populates the adjacency list accordingly. This takes O(e) time, where e is the number of edges.

DFS traversal: The main time complexity comes from the DFS traversal itself. In the worst case, each vertex and each edge is visited exactly once. This results in a time complexity of O(n + e), where n is the number of vertices and e is the number of edges.

Overall Time Complexity: O(n + e) or O(v+2E)

Space Complexity: O(V) [if we are considering complexity of only bfs algo part]

Adjacency List: The adjacency list is represented using a vector of vectors. For each vertex, a vector stores its adjacent vertices. In the worst case, the sum of the sizes of all these vectors will be equal to the number of edges (2 * e, since each edge is counted twice in an undirected graph). Therefore, the space complexity for the adjacency list is O(e).

Visited Array: A boolean array vis of size n is used to keep track of visited vertices. This contributes O(n) to the space complexity.

Recursive Call Stack: The DFS function is implemented recursively. In the worst case, the maximum depth of the call stack will be the number of vertices, resulting in a space complexity of O(n).

Overall Space Complexity: O(e + n)

To summarize, the time complexity of the code is O(n + e), and the space complexity is O(e + n), where n is the number of vertices and e is the number of edges in the graph
*/

#include <iostream>
#include <vector>
using namespace std;

void dfs(int st,vector<int> *adj,vector<bool> &vis,int n){
    cout<<st<<endl;
    vis[st]=true;

    for(auto it :adj[st]){
        if(!vis[it]){
            dfs(it,adj,vis,n);
        }
    }

}

int main(){
    int n;
    cout<<"Enter number of vertices:"<<endl;
    cin>>n;


    int e;
    cout<<"Enter number of edges:"<<endl;
    cin>>e;

    // adjacency list
    vector<int> adj[n];
    for(int i=0;i<e;i++){
        cout<<"Enter u and v of:"<<i<<"st edge"<<endl;
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);

    }

    vector<bool> vis(n,false);
    dfs(0,adj,vis,n);
}


/*

PS D:\IGDTUW-D\CODING\LEETCODE_CHALLENGE\INTERNSHIP_PREPARATION> cd "d:\IGDTUW-D\CODING\LEETCODE_CHALLENGE\INTERNSHIP_PREPARATION\GRAPH\" ; if ($?) { g++ dfs.cpp -o dfs } ; if ($?) { .\dfs }
Enter number of vertices:
5
Enter number of edges:
4
Enter u and v of:0st edge
0 2
Enter u and v of:1st edge
2 4
Enter u and v of:2st edge
0 3
Enter u and v of:3st edge
0 1
0
2
4
3
1
*/



