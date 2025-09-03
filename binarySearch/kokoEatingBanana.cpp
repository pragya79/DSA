void isPossible(vector<int> piles,int h,int maxSpeed){

    for(int banana: piles){
        int timePerPile=ceil(banana/(double)maxSpeed);
        totalTime+=timePerPile;
        if(totalTime>h){
            return false;
        }
    }
    return true;
}
int minRate(vector<int> piles,int h){
    int s=1;
    int e=*max_element(piles.begin(),piles.end());

    while(s<=e){
        int mid=s+(e-s)/2;
        if(isPossible(piles,h,mid)){
            ans=mid;
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return ans;
}