class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<vector<int>> adj(n);
        
        for(int i=0; i<pre.size(); i++){
            adj[pre[i][0]].push_back(pre[i][1]);
        }
        
        vector<int> vis(n, 0);
        vector<int> reg(n, 0);
        for(int i=0; i<n; i++){
            if(reg[i] == 0 && !findCircle(i, adj, vis, reg))return false;
        }
        return true;
    }
    
    bool findCircle(int src, vector<vector<int>>& adj, vector<int>& vis, vector<int>& reg){
        vis[src] = 1;
        
        for(auto x: adj[src]){
            if(vis[x] == 1)return false;
            else if(reg[src] != 1 && !findCircle(x, adj, vis, reg))return false;
        }
        vis[src] = 0;
        reg[src] = 1;
        return true;
    }
};
