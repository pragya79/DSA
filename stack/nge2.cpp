//here array is circular
#include<vector>
#include<stack>
using namespace std;

vector<int> nextGreater(vector<int> &nums){
    stack<int> st;
    vector<int> nge(nums.size(),0);

    int n=nums.size();
    for(int i=2*n-1;i>=0;i--){
        while(!st.empty() && st.top()<=nums[i%n]){
            st.pop();
        }
        if(i<n){
            if(st.empty()){
                nge[i]=-1;
            }else{
                nge[i]=st.top();
            }
        }
        st.push(nums[i%n]);
    }
  
    return nge;
}