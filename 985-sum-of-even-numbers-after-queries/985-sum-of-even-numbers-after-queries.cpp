class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        
        int n = nums.size(),m = queries.size();
        
        vector<int>res;
        int sum = 0;
        for(auto &v:nums){
            if(v%2==0){
                sum+=v;
            }
        }
        
        for(int i=0;i<m;i++){
            int val = queries[i][0],ind = queries[i][1];
            
            if(nums[ind]%2==0){
                sum-=nums[ind];
            }
            nums[ind]+=val;
            if(nums[ind]%2==0){
                sum+=nums[ind];
            }
            res.push_back(sum);
        }
        return res;
    }
};