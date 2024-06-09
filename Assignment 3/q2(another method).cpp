int Solution::solve(int A, vector<vector<int> > &B) {
    vector<pair<int,int>> v;   
    for(int i=0;i<B.size();i++){
        v.push_back({B[i][0],B[i][1]});
    }
    sort(v.begin(),v.end());
    int vis[A]={0};
    queue<int> q;
    q.push(1);
    vis[0]=1;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(auto p:v){
            if(p.first==node && vis[(p.second)-1]==0){
                if(p.second!=A){
                    q.push(p.second);
                    vis[(p.second)-1]=1;
                    }
                else{ 
                    return 1;
                    }
            }
        }
    }
    return 0;
}