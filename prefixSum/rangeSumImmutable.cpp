int rangeSum(vector<int> &nums,int left,int right){
    int n=nums.size();
    vector<int> prefix(n);
    prefix[0]=nums[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+nums[i];
    }

    if(left==0){
        return prefix[right];
    }
    return prefix[right]-prefix[left-1];
}