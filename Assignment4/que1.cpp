#include<bits/stdc++.h>
using namespace std;

int dfs(int i, vector<int>& graph, vector<int>& depth) {
    if (graph[i] == -1)
        return 1;

    if (depth[i] != 0)
        return depth[i]; 

    depth[i] = dfs(graph[i] - 1, graph, depth) + 1;
    return depth[i]; 
}

int main() {
    int n;
    cin >> n; 

    vector<int> graph(n);
    vector<int> depth(n, 0); 
    int ans = 0;

    for (int i = 0; i < n; i++) {
        cin >> graph[i];
    }

    for (int j = 0; j < n; j++) {
        ans = max(ans, dfs(j, graph, depth));
    }

    cout << ans << endl;
    return 0;
}
