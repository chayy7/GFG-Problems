class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int maxi = INT_MIN;
        
        int i=0, j=0;
        int sum=0;
        while(j < arr.size()){
            sum += arr[j];
            
            if(j-i+1 < k){
                j++;
            }else if(j-i+1 == k){
                maxi = max(maxi, sum);
                sum -= arr[i];
                i++, j++;
            }
        }
        
        return maxi;
    }
};