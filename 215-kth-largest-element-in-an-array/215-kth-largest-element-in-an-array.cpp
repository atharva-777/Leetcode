class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        priority_queue<int>pq;
        
        for(auto &v:nums){
            pq.push(v);
        }
        int res=0;
        while(k--){
            res = pq.top();
            pq.pop();
        }
        return res;
    }
};