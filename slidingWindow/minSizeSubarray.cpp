//minimal lenght of subarray whose sum>=target

int minSize(vector<int>& nums,int target){
    int minLen=INTMAX, int left=0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        while(sum>=target){
            minLen=min(minLen,i-left+1);
            sum-=nums[left];
            left++;
        }
    }
    return minLen;
}