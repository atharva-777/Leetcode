class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        if(n==4) return false;
        int base = n-2,i=0;
        vector<int>conv;
        while(n>0){
            conv.push_back(n%base);
            n/=base;
            i++;
        }
        
        
        int decimal = 1;
        int total = 0;
        for (auto& it : conv)
        {
            total += it * decimal;
            decimal *= 10;
        }
        if(total ==12) return false;
        return true;
        
    }
};