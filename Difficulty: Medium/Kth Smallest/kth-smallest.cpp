class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        priority_queue<int, vector<int> , greater<int>> pq;
        for(auto i:arr){
            pq.push(i);
            
            
        }
        
        int i=1;
        
        while(i != k){
            pq.pop();
            i++;
        }
        
        
        return pq.top();
    }
};