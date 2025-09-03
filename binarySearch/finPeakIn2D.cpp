vector<int> peak(vector<vector<int>> nums){
        int m=nums.size();
        int n=nums[0].size();
        int s=0,e=n-1;
        while(s<m && e>=0){
            int midCol=s+(e-s)/2;
            int midRow=maxColValue(nums,midCol);

            int left=midCol-1>=0?nums[midRow][midCol-1]:-1;
            int right=midCol+1<n?nums[midRow][mid+1]:-1;

            if(left<=nums[midRow][midCol] && right<=nums[midRow][midCol]){
                return {midRow,midCol};
            }
            if(left>nums[midRow][midCol]){
                e=midCol-1;
            }else{
                s=midCol+1;
            }
        }
        return {-1,-1};
}
int maxColValue(vector<vector<int>> nums,int col){
        int m=nums.size();
        int maxEle=INT_MIN;
        int row=-1;
        for(int i=0;i<m;i++){
            maxEle=max(maxEle,nums[i][col]);
            row=i;
        }
        return row;
}