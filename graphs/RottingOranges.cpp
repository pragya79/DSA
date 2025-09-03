#include <bits/stdc++.h>
using namespace std;
int rottingOranges(vector<vector<int>> &grid){
    int m=grid.size();
    int n=grid[0].size();

    vector<vector<int>> visited(m,vector<int>(n,0));

    queue<pair<pair<int,int>,int>> q;
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]==2){
                q.push({{i,j},1});
                visited[i][j]=2;
            }
        }
    }

    int total_min_time=0;
    //calculating time
    while(!q.empty()){
        auto [[row,col],time] = q.front();
        q.pop();
        total_min_time=max(total_min_time,time);
        for(int k=0;k<4;k++){
            int adjRow=row+delRow[k];
            int adjCol=col+delCol[k];
            if(adjRow>=0 && adjRow<m && adjCol>=0 && adjCol<n && visited[adjRow][adjCol]==0 && grid[adjRow][adjCol]==1){
                q.push({adjRow,adjCol},time+1);
                grid[adjRow][adjCol]=2
            }
        }
    }
    //again traversing the grid to check if any fesh orange orange is still left
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(visited[i][j]==0 && grid[i][j]==1){
                total_min_time=-1;
            }
        }
    }
    return total_min_time;
}