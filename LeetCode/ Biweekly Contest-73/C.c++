 class Solution {
public:
    void dfs(int i, vector<vector<int>> &adj, vector<vector<int>> &ans,int p,vector<bool> &vis)
    {
        vis[i]=true;
        for(auto &x: adj[i])
        {
            if(!vis[x])
            {
                ans[x].push_back(p);
                dfs(x,adj,ans,p,vis);
            }
        }
        return;
    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) 
    {
        vector<vector<int>> adj(n);
        for(auto &x: edges)
        {
            adj[x[0]].push_back(x[1]);
        }
        
        vector<vector<int>> ans(n);
        
        vector<bool> vis(n,false);
        for(int i=0;i<n;i++)
        {
            for(int i=0;i<n;i++) vis[i]=false;
            dfs(i,adj,ans,i,vis);
        }
        for(auto &x: ans)
        {
            sort(x.begin(),x.end());
        }
        return ans;
    }
};