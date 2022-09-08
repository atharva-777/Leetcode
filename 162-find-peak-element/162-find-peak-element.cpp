class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n = nums.size();
        
        int i = 0,j = n-1;
        if(n==1) return 0;
       
        
        if(n>1 && nums[0]>nums[1]){
            return 0;
        }
        if(n>1 && nums[n-1]>nums[n-2]){
            return n-1;
        }
        
        while(i<=j){
            int mid = (i+j)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                return mid;
            }
            else if(nums[mid+1]>nums[mid]){
                i = mid+1;
            }else if(nums[mid-1]>nums[mid]) {
                j = mid;
            }
        }
        return i;
    }
};