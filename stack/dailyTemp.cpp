vector<int> dailyTemp(vector<int> temperature){
    int n=temperature.size();
    vector<int> ans(n,0);
    stack<int> st;

    for(int i=0;i<n;i++){
        while(!st.empty() && temperature[st.top()]<temperature[i]){
            int idx=st.top();
            st.pop();
            ans[idx]=i-idx;
        }
        st.push(i);
    }
    return ans;
}