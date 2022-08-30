class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
                int n = matrix.size(),i,j;
        
        vector<vector<int>>res(n,vector<int>(n,0));
        
        
        int l = n-1,r = 0;
        
       for(i=0;i<n;i++){
           l = n-1;
           for(j=0;j<n;j++){
               
               res[i][j] = matrix[l][r];
               l--;
           }
           r++;
           
       }
        
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                matrix[i][j] = res[i][j];
            }
        }
        
    }
};