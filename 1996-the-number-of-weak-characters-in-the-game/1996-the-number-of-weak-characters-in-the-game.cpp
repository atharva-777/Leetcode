class Solution {
public:
    
    static bool comp(vector<int> &a, vector<int> &b)
     {
          if (a[0] == b[0])
          {
               return a[1] > b[1];
          }
          return a[0] < b[0];
     }
    
    int numberOfWeakCharacters(vector<vector<int>>& p) {
        
        int n = p.size();
        
        sort(p.begin(),p.end(),comp);
        
        
        int ans = 0,mn = INT_MIN;
        
        for (int i =n- 1; i >= 0; i--)
          {
               if (p[i][1] < mn) 
                    ans++;
               mn = max(mn, p[i][1]);
          }
        
        return ans;
    }
};