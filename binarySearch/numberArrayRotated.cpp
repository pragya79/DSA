int low=0,high=n-1;
int index=-1;
int minEle=INT_MAX;
while(low<=high){
    int mid=(low+high)/2;
    if(nums[low]<=nums[high]){
        minEle=min(minEle,nums[low]);
        index=low;
        break;
    }

    if(nums[low]<=nums[mid]){
        //left half is sorted
        if(nums[low]<ans){
            index=low;
            ans=nums[low];
        }
        //eliminate this half now
        low=mid+1;
    }else{
        //right half is sorted
        if(nums[mid]<ans){
            index=mid;
            ans=nums[mid];
        }
        high=mid-1;
    }
}

return index;