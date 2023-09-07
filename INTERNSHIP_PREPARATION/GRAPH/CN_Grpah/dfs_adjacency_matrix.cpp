#include <iostream>
using namespace std;

void printDFS(int **edges,int n ,int sv,bool * vis){
    cout<<sv<<endl;
    vis[sv]=true;

    for(int i=0;i<n;i++){
        if(i==sv) continue;
        if(edges[sv][i]==1 && !vis[i]){
            printDFS(edges,n,i,vis);
        }
    }
}

int main(){

    // n is number of vertex
    // e is number of edges
    int n,e;
    cin>>n>>e;
    int **edges=new int*[n];

    // here in adjacenecy matrix
    // n is number of rows

    for(int i=0;i<n;i++){
        edges[i]=new int [n];
        for(int j=0;j<n;j++){
            edges[i][j]=0;
        }
    }

    for(int i=0;i<e;i++){
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;


    }

    bool * vis=new bool[n];
    for(int i=0;i<n;i++){
        vis[i]=false;
    }

    for(int i=0;i<n;i++){
        if(!vis[i]){
          printDFS(edges,n,i,vis);
        }
    }


    return 0;
}

/*


output :
D\CODING\LEETCODE_CHALLENGE\INTERNSHIP_PREPARATION\GRAPH\CN_Grpah\" ; if ($?) { g++ dfs_adjacency_matrix.cpp -o dfs_adjacency_matrix } ; if ($?) { .\dfs_adjacency_matrix }
7
7
0 1
0 2
1 5
5 4
4 3
3 2
2 6
0
1
5
4
3
2
6

*/