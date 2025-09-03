vector<int> nge(vector<int>&nums1, vector<int> &nums2){
    unordered_map<int,int> mp;
    stack<int> st;

    int n2=nums2.size();

    for(int i=n2-1;i>=0;i--){
        while(!st.empty() && st.top()<=nums2[i]){
            st.pop();
        }
        if(st.empty()){
            mp[nums2[i]]=-1;
        }else{
            mp[nums2[i]]=st.top();
        }

        st.push(nums2[i]);

    }
    int n1=nums1.size();
    vector<int> nge(n1,0);
    for(int i=0;i<n1;i++){
        if(mp.find(nums1[i])!=mp.end()){
            nge[i]=mp[nums1[i]];
        }
    }
    return nge;
}