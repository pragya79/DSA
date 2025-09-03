bool binarySearch(vector<int> passedRow,int target){
    int s=0,e=passedRow.size()-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(passedRow[mid]==target){
            return true;
        }
        if(passedRow[mid]>target){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return false;
}
//here only rows are sorted
bool search(vector<vector<int>> matrix,int target){
    int m=matrix.size();
    int n=matrix[0].size();

    for(int row=0;row<m;row++){
        if(matrix[row][0]<=target && matrix[row][n-1]>=target){
            binarySearch(matrix[i],target);
        }
    }
    return false;
}