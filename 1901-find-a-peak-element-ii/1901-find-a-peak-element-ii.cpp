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
    
   
    
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        
        int n = mat.size(),m = mat[0].size();
        
        vector<int>maxOfCol;
        vector<pair<int,int>>cord;
        
        int i = 0,j = 0;
        
        for(i=0;i<m;i++){
            
            int mx = 0,mxind=0;
            
            for(j = 0;j<n;j++){
                
                if(mx<mat[j][i]){
                    mxind = j;
                }
                
                mx = max(mx,mat[j][i]);
                
                
                
            }
            
            maxOfCol.push_back(mx);
            cord.push_back(make_pair(mxind,i));
            // cout<<mxind<<" "<<i<<endl;
            
        }
        
        
        
        
        
        int ind = findPeakElement(maxOfCol);
        cout<<maxOfCol[ind]<<endl;
        cout<<ind<<endl;
        int a = cord[ind].first;
        int b = cord[ind].second;
        
        
        
        
        vector<int>res;
        res.push_back(a);       
        res.push_back(b);

        return res;
    }
};