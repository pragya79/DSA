//BFs takes O(m*n) for unweighted graph ->more efficient
int shortestLength(vector<vector<int>> &grid){
    int m=grid.size();
    int n=grid[0].size();

    if(grid[0][0]==1 || grid[m-1][n-1]){
        return -1;
    }
    int delRow[8]={-1,-1,-1,0,1,1,1,0};
    int delCol[8]={-1,0,1,1,1,0,-1,-1};

    vector<vector<int>> distVec(m,vector<int>(n,-1));
    distVec[0][0]=1;

    queue<pair<int,int>> q;
    pq.push({0,0});//{r,c}

    while(!q.empty()){
        int r=q.front().first;
        int c=q.front().second;
        q.pop();

        int curr_dist=distVec[r][c];

        for(int k=0;k<8;k++){
            int adjRow=r+delRow[k];
            int adjCol=c+delCol[k];
            if(adjRow>=0 & adjRow<m && adjCol>=0&& adjCol<n &&grid[adjRow][adjCol]!=1 &&distVec[adjRow][adjCol]==-1){
                // if(curr_dist+1<distVec[adjRow][adjCol]) no need of this
                    distVec[adjRow][adjCol]=curr_dist+1;
                    q.push({adjRow,adjCol});
            }
        }
    }
    return distVec[m-1][n-1];
}
//DIjkstra
//time complexity =
                // each operation= O(log(m*n)) 
                //for each cell =O(m*n*log(m*n))
//space complexity =
                //for distVec-> O(m*n)

int shortestLength(vector<vector<int>> &grid){
    int m=grid.size();
    int n=grid[0].size();

    if(grid[0][0]==1 || grid[m-1][n-1]){
        return -1;
    }

    vector<vector<int>> distVec(m,vector<int>(n,1e9));
    distVec[0][0]=1;

    int delRow[8]={-1,-1,-1,0,1,1,1,0};
    int delCol[8]={-1,0,1,1,1,0,-1,-1};

    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
    pq.push({1,{0,0}});//dist,{r,c}
    while(!pq.empty()){
        int distance=pq.top().first;
        int r=pq.top().second.first;
        int c=pq.top().second.second;
        pq.pop();
        for(int k=0;k<8;k++){
            int adjRow=r+delRow[k];
            int adjCol=c+delCol[k];
            if(adjRow>=0 & adjRow<m && adjCol>=0&& adjCol<n &&grid[adjRow][adjCol]!=1){
                if(distance+1<distVec[adjRow][adjCol]){
                    distVec[adjRow][adjCol]=distance+1;
                    pq.push({distance+1,{adjROw,adjCol}});
                }
            }
        }
    }
    return distVect[m-1][n-1]==1e9?-1:distVect[m-1][n-1];


}