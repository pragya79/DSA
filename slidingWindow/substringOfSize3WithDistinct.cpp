int countSubstr(string s){
    int count=0;

    int n=s.length();
    if(n<3){
        return 0;
    }
    int left=0;
    unordered_map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
        if(i-left+1>3){
            //shrink the window
            mp[s[left]]--;
            if(mp[s[left]]==0){
                mp.erase(s[left]);
            }
            left++;
        }

        if(mp.size()==3 && i-left+1==3){
            count++;
        }
    }
    return count;
}