int countNeatives(vector<vector<int>> &matrix){
    int m=matrix.size();
    int n=matrix[0].size();

    int row=0,col=n-1;
    int count=0;
    while(row<m && col>=0){
        if(matrix[row][col]>=0){
            row++;
        }else{
            count+=m-i;
        }
    }
    return count;
}