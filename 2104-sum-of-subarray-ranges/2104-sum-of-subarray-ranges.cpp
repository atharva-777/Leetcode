class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        
        long long ans = 0;
        
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            int a = nums[i],b=nums[i];
            for(int j=i;j<n;j++){
                a=max(a,nums[j]);
                b=min(b,nums[j]);
                ans+=(a-b);
            }
        }
        return ans;
    }
};