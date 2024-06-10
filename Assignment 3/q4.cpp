class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
    vector<vector<int>> adj(n);
    for(auto i:edges){
        adj[i[0]].push_back(i[1]);
        adj[i[1]].push_back(i[0]);
    }
    vector<bool>vis(n,false);
    queue<int> q;
    q.push(source);
    vis[source]=true;
    while(!q.empty()){
        
        int node=q.front();
        q.pop();
        if(node==destination)return true;
        for(auto it:adj[node]){
            if(!vis[it]){
                vis[it]=true;
                q.push(it);
            }
        }
    }
    return vis[destination];
    }
};