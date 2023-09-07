/*

Time Complexity:

Initializing the adjacency list: The code initializes an empty adjacency list for each vertex. This takes O(n) time, where n is the number of vertices.

Building the adjacency list: The code takes input for the edges and populates the adjacency list accordingly. This takes O(e) time, where e is the number of edges.

BFS traversal: The BFS traversal explores each vertex and each edge exactly once, which takes O(n + e) time in the worst case.

Overall Time Complexity: O(n + e)


Space Complexity:O(V) [if we are considering complexity of only bfs algo part][ O(V), The space complexity of DFS is O(V). The space is consumed by the recursion stack and the visited array.]

Adjacency List: The adjacency list is represented using a vector of vectors. Similar to your previous code, the sum of the sizes of these vectors will be equal to the number of edges (2 * e) in the worst case. Therefore, the space complexity for the adjacency list is O(e).

Queue: The space complexity of the queue used for BFS will be at most O(n), where n is the number of vertices. This is because, in the worst case, all vertices can be enqueued in the queue.

Visited Array: A boolean array vis of size n is used to keep track of visited vertices. This contributes O(n) to the space complexity.

Other variables: The other variables used in the code take up constant space and do not depend on the input size.

Overall Space Complexity: O(e + n)

*/
#include <iostream>
#include <vector>
#include <queue>
using namespace std;


void bfs( int st,vector<int> *adj,int n,vector<bool> &vis){
    queue<int>q;
    q.push(st);
    cout<<st<<endl;
    while(!q.empty()){
        int f=q.front();
        q.pop();
        
        for(auto it:adj[f]){
            if(vis[it]==false){
                q.push(it);
                vis[f]=true;
                cout<<it<<endl;
            }
        }


    }

}
int main(){
    cout<<"Enter number of vertex:"<<endl;
    int n;
    cin>>n;

    int e;
    cout<<"Enter number of edges:"<<endl;
    cin>>e;
    // creating adjacency list to store the graph
    vector<int> adj[n];
// take all the edges
    for(int i=0;i<e;i++){
        int u,v;
        cout<<"Enter u and v of "<<i<<"th edge:"<<endl;
        cin>>u>>v;

        // undirected graph
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> vis(n,false);
    bfs(0,adj,n,vis);

    return 0;
}

/*


PS D:\IGDTUW-D\CODING\LEETCODE_CHALLENGE\INTERNSHIP_PREPARATION\GRAPH> cd "d:\IGDTUW-D\CODING\LEETCODE_CHALLENGE\INTERNSHIP_PREPARATION\GRAPH\" ; if ($?) { g++ dfs.cpp -o dfs } ; if ($?) {
 .\dfs }
Enter number of vertex:
5
Enter number of edges:
4
Enter u and v of 0th edge:
0 1
Enter u and v of 1th edge:
0 2
Enter u and v of 2th edge:
0 3
Enter u and v of 3th edge:
2 4
0
1
2
3
4
PS D:\IGDTUW-D\CODING\LEETCODE_CHALLENGE\INTERNSHIP_PREPARATION\GRAPH> cd "d:\IGDTUW-D\CODING\LEETCODE_CHALLENGE\INTERNSHIP_PREPARATION\GRAPH\" ; if ($?) { g++ dfs.cpp -o dfs } ; if ($?) { .\dfs }
Enter number of vertex:
5
Enter number of edges:
4
Enter u and v of 0th edge:
0 1
Enter u and v of 1th edge:
0 2
Enter u and v of 2th edge:
0 3
Enter u and v of 3th edge:
2 4
0
1
2
3
4


*/