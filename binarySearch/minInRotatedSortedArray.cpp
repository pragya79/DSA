int min(vector<int> nums){
    int s=0,e=nums.size()-1;

    int res=INT_MAX;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[s]<=nums[mid]){
            //left half is sorted
            //take minimum from this half and then we'll move to the right half
            res=min(res,nums[s]);
            s=mid+1;
        }else{
            res=min(res,nums[mid]);
            e=mid-1;
        }
    }
    return res;
}