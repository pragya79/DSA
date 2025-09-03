//subarrY MAXlEN having 0s andd 1s equal
int maxSubarray(vector<int>& nums){
    int n=nums.size();
    int maxLen=0;

    unordered_map<int,int> mp;//{sum,idx}
    mp[0]=-1;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
        if(mp.find(sum)!=mp.end()){
            maxLen=max(maxLen,i-mp[sum]);
        }
        mp[sum]=i;
        
    }
    return maxLen;
}