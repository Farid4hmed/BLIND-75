class Solution {
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        vector<int> vis(V, 0);
        vector<int> reg(V, 0);
        
        int provinces = 0;
        for(int i=0; i<V; i++){
            if(reg[i] == 0){
                dfs(i, adj, vis, reg);
                provinces++;
            }
        }
        return provinces;
    }
    
    void dfs(int src, vector<vector<int>> adj, vector<int>&vis, vector<int>& reg){
        vis[src] = 1;
        reg[src] = 1;
        
        for(int j=0; j<adj[src].size(); j++){
            if(adj[src][j] == 1 && vis[j] == 0 && reg[j] == 0)dfs(j, adj, vis, reg);
        }
        vis[src] = 0;
    }
};
