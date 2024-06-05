class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    int vis[V]={0};
	    queue<pair<int,int>> q;
	    vis[0]=1;
	    q.push({0,0});
	    while(!q.empty()){
            pair<int,int>node = q.front();
	        q.pop();
	        if(node.first == X) return node.second;
	        vis[node.first] = 1;
	        for(auto it:adj[node.first]){
	             if(!vis[it]){
	                q.push({it,node.second+1});
	                vis[it] = 1;
	            }
	        }
	    }
	    return -1;
	}
};