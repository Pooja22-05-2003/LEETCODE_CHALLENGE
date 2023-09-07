#include <bits/stdc++.h>
using namespace std;

int dfs(vector<vector<int>>& g, vector<int>& disRev, vector<bool>& visit, int u) {
    visit[u] = true;
    int totalRev = 0;

    for (int v : g[u]) {
        if (!visit[v]) {
            disRev[v] = disRev[u] + 1;
            totalRev += dfs(g, disRev, visit, v);
        }
    }

    return totalRev;
}

void printMinEdgeReverseForRootNode(vector<vector<int>>& g, int n) {
    vector<int> disRev(n + 1, 0);
    vector<bool> visit(n + 1, false);

    int totalRev = dfs(g, disRev, visit, 1);

    int res = INT_MAX;
    int root = 1;

    for (int i = 1; i <= n; i++) {
        int edgesToRev = (totalRev - disRev[i]) + (disRev[i] - (g[i].size() - disRev[i]));
        if (edgesToRev < res) {
            res = edgesToRev;
            root = i;
        }
    }

    cout << root+1;
}

int main() {
    int n = 3;
    vector<vector<int>> g(n + 1);

    int g_from[] = {3,2,2};
    int g_to[] = {3,1,3};

    for (int i = 0; i < n - 1; i++) {
        g[g_from[i]].push_back(g_to[i]);
    }

    printMinEdgeReverseForRootNode(g, n);

 return 0;
}