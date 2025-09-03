void dfs(int &count,int node,vector<vector<int>> &adjList,vector<bool> &visited){
    visited[node]=true;
    count++;

    for(auto neighbr: adjList[node]){
        if(!visited[neighbor]){
            dfs(count,neighbor,adjList,visited);
        }
    }
}

int reachableNodes(int n,vector<vector<int>> edges,vector<int> &restricted){
    //building the graph
    vector<vector<int>> adjList(n);
    for(auto edge: edges){
        int u=edge[0];
        int v=edge[1];

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    vector<bool> visited(n,false);
    //mark all restircted nodes as visited
    for(int node: restricted){
        visited[node]=true;
    }
    int count=0;
    dfs(count,0,adjList,visited);
    return count;
}