#include<bits/stdc++.h>
using namesapce std;

void solve(int index,vector<int> &ds,vector<int> &arr,vector<vector<int>> &ans,int target){
    if(index==arr.size()){
        if(target==0){
            ans.push_back(ds);
        }
        return;
    }
    for(int j=index;j<arr.size();j++){
        if(j>index && arr[j]==arr[j-1]){
            //skip
            continue;
        }
        if(arr[j]>target){
            break;//next eements will also be greater than the target as the arr is sorted
        }
        if(arr[j]<=target){
            //pick
            ds.push_back(arr[j]);
            solve(j+1,ds,arr,ans,target-arr[j]);
            //backtrack
            ds.pop_back();
        }
    }
    return;
}
vector<vector<int>> combnationSum(vector<int> arr,int target){
    vector<vector<int>> ans;

    //sort arr
    sort(arr.begin(),arr.end());
    vector<int> ds;
    solve(1,ds,arr,ans,target);
    return ans;
}