int midIndex(vector<int> &nums){
    int totalSum=0;
    for(int x: nums){
        totalSum+=x;
    }
    int leftSum=0;
    for(int i=0;i<n;i++){
        int rightSum=totalSum-leftSum-nums[i];
        if(rightSum==leftSum){
            return i;
        }
        leftSum+=nums[i];
    }
    return -1;
}