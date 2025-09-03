int pivot(int n){
    int totalSum=0;
    for(int i=1;i<=n;i++){
        totalSum+=i;
    }
    int leftSum=0;
    for(int i=1;i<=n;i++){
        leftSum+=i;
        int rightSum=totalSum-leftSum+i;
        if(leftSum==rightSum){
            return i;
        }
    }
    return -1;
}