string sort(string s) {
    // complete the function here
    
    int n=s.size();
    vector<int> v(26,0);
    for(int i=0;i<n;i++){
        int idx= s[i]-'a';
        v[idx]++;
    }
    
    string ans = "";
    for(int i=0;i<26;i++){
        char c= i+'a';
        for(int j=0;j<v[i];j++){
            ans += c;
        }
    }
    return ans;
}