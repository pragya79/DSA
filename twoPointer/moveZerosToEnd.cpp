void move(vector<int> &nums){
    int n=nums.size();
    int left=0;
    for(int i=0;i<n;i++){
        if(nums[i]!=0){
            nums[left]=nums[i];
            left++;
        }
    }
    // make the rest 0s
    while(left<n){
        nums[left]=0;
        left++;
    }
}