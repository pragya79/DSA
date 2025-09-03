int longestLen(string &s, int k){
    int n=s.length();
    int left=0;
    int maxLen=0;

    unordered_map<char,int> mp;
    int maxFreq=0;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
        maxFreq=max(maxFreq,mp[s[i]]);
        while((i-left+1)-maxFreq>k){
            mp[s[left]]--;
            if(mp[s[left]]==0){
                mp.erase(s[left]);
            }
            left++;
        }
        maxLen=max(maxLen,i-left+1);
    }
    return maxLen;
}