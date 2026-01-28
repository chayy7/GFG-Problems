class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int>& start, vector<int>& end) {
        vector<pair<int,int>> p;
        for(int i=0;i<end.size();i++){
            p.push_back({start[i], end[i]});
        }
        sort(p.begin(), p.end(), [](auto &a, auto &b){
            return a.second < b.second;
        });
        
        int e = -1;
        int cnt = 0;
        for(int i=0;i<end.size();i++){
            if(p[i].first > e){
                cnt++;
                e = p[i].second;
            }
        }
        // for(auto i:p){
        //     cout << i.first << " " << i.second << endl;
        // }
        
        return cnt;
    }
};