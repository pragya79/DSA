int single(vector<int> nums){
    int n=nums.size();
    if(nums[0]!=nums[1]){
        return 0;
    }
    if(nums[n-1]!=nums[n-2]){
        return n-1;
    }
    int s=1,e=n-2;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]!=nums[mid-1] || nums[mid]!=nums[mid+1]){
            return mid;
        }
        if((mid%2)==0 && nums[mid]==nums[mid+1] || (mid%2)==1 && nums[mid]==nums[mid-1]){
            //left half-> {even,odd}
            //single element will be on right half
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return -1;
}