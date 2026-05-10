class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        
        int i = 0, j = 0;
        vector<int> ans;

        while(i < a.size() && j < b.size()) {

            if(!ans.empty() && i < a.size() && ans.back() == a[i]) {
                i++;
                continue;
            }

            if(!ans.empty() && j < b.size() && ans.back() == b[j]) {
                j++;
                continue;
            }

            if(a[i] == b[j]) {
                ans.push_back(a[i]);
                i++;
                j++;
            }
            else if(a[i] < b[j]) {
                ans.push_back(a[i]);
                i++;
            }
            else {
                ans.push_back(b[j]);
                j++;
            }
        }

        while(i < a.size()) {

            if(!ans.empty() && ans.back() == a[i]) {
                i++;
                continue;
            }

            ans.push_back(a[i++]);
        }

        while(j < b.size()) {

            if(!ans.empty() && ans.back() == b[j]) {
                j++;
                continue;
            }

            ans.push_back(b[j++]);
        }

        return ans;
    }
};