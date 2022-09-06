class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        mp[0] = -1;
        int res=0,sum=0;
        
        for(int i=0;i<n;i++){
            sum+=nums[i]==1?1:-1;
            if(mp.find(sum)!=mp.end()){
                if(res<i-mp[sum]){
                    res = i-mp[sum];
                }
            }else{
                mp[sum] = i;
            }
        }
        return res;
        
    }
};