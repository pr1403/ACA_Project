int Solution::solve(int A, vector<vector<int> > &B) {
    vector<vector<int>> adj(A+1);
    for(int i=0;i<B.size();i++){
        adj[B[i][0]].push_back(B[i][1]);
    }
    int vis[A]={0};
    queue<int> q;
    q.push(1);
    vis[0]=1;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(auto it:adj[node]){
            if(!vis[it-1]){
                vis[it-1]=1;
                q.push(it);
            }
        }
    }
    return vis[A-1];
}