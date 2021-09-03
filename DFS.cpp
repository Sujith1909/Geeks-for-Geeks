void dfsrec(vector<int> g[],int s, bool visited[],vector<int> &res)
  {
      visited[s] = true;
      res.push_back(s);
      for(int x:g[s])
      {
          if(visited[x] == false)
          {
              dfsrec(g,x,visited,res);
          }
      }
  }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        bool visited[V];
        vector<int> res;
        for(int i =0;i<V;i++)
        {
            visited[i] = false;
        }
        dfsrec(adj,0,visited,res);
        return res;
    }