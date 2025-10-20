class Solution {
  public:
    vector<int> twoRepeated(vector<int>& arr) {
        map<int, int> mpp;
        vector<int> ans;

        for (auto i : arr) {
            mpp[i]++;
            if (mpp[i] == 2){
                ans.push_back(i);
            }
        }

        return ans;
    }
};
