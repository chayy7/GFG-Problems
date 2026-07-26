class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
        int n=arr.size();
        
        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());
        
        int p=1;
        int maxi = 1;
        
        int i=1, j =0;
        while(i < n && j < n){
            if(arr[i] <= dep[j]){
                p++;
                maxi = max(maxi, p);
                i++;
            }else{
                p--;
                j++;
            }
        }
        
        return maxi;
        
    }
};
