class Solution {
public:
    int maximumSum(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<pair<int,int>>curr;
        
        for(auto &x:nums){
            int sum = 0,v=x;
            while(v>0){
                sum+=(v%10);
                v/=10;
            }
            curr.push_back(make_pair(sum,x));
        }
        sort(curr.begin(),curr.end());
        
        int ans = -1;
    
        for(int i=0;i<n-1;i++){
            if(curr[i].first == curr[i+1].first){
                int sum = curr[i].second + curr[i+1].second;
                ans = max(ans,sum);
            }
        }
        
        return ans;
        
    }
};