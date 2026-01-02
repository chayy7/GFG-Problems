class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code here
        int n=end.size();
        
        vector<pair<int,int>> v;
        
        for(int i=0;i<n;i++){
            v.push_back({end[i],start[i]});
        }
        
        sort(v.begin(), v.end());
        // for(auto i: v){
        //     cout << i.first << " " << i.second << endl;
        // }
        
        int ans=0;
        int endd = -1;
        
        for(int i=0;i<n;i++){
            if(v[i].second > endd){
                ans++;
                endd= v[i].first;
            }
        }
        
        
        
        return ans;
    }
};