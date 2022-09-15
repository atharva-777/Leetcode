class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int n = haystack.length(),m = needle.length();
        
        size_t f;
        
        f = haystack.find(needle);
        
        if(f!=string::npos){
            return f;
        }
        return -1;
    }
};