class Solution {
  public:
    // Function to find common elements in three arrays.
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
                               vector<int> &arr3) {
        // Code Here
        set<int> s1(arr1.begin(),arr1.end());
        set<int> s2(arr2.begin(),arr2.end());
        set<int> s3(arr3.begin(),arr3.end());
        vector<int> v;
        for(auto i: s1){
            v.push_back(i);
        }
        for(auto i: s2){
            v.push_back(i);
        }
        for(auto i: s3){
            v.push_back(i);
        }
        
        map<int,int> mpp;
        for(int i = 0;i<v.size();i++){
            mpp[v[i]]++;
        }
        int n= v.size();
        vector<int> c;
        for(auto i: mpp){
            
            if(i.second > 2){
                c.push_back(i.first);
            }
        }
        if(c.size() == 0){
            return {-1};
        }
        
        return c;
    }
};