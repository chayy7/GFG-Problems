class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        if(arr.size() <= 1) return {};
        sort(arr.begin(), arr.end());
        int i=0, j = arr.size() - 1;
        int diff = INT_MAX;
        int a= 0, b= 0;
        while(i < j){
            int sum = arr[i]+arr[j];
            if(abs(target- sum) < diff){
                diff = abs(target- sum);
                a= arr[i];
                b= arr[j];
            }else if(abs(target -sum) == diff){
                // diff = target- sum;
                if(arr[i] < a){
                    a = arr[i];
                    b = arr[j];
                }
            }
            
            if(sum >= target){
                j--;
            }else{
                i++;
            }
            
        }
        
        return {a,b};
    }
};