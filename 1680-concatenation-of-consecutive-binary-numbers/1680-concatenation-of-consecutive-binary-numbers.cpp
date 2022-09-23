class Solution {
public:
    
   int dectobin(int arr[17],int n){
       int i=0;
       while(n){
           arr[i++] = n%2;
           n>>=1;
       }
       return i;
   }
    
    int concatenatedBinary(int n) {
        unsigned long long int ans = 0;
         int M = 1e9+7;
        
        for(int i=1;i<=n;i++){
            int bits[17];
            int j = dectobin(bits,i);
            while(j){
                ans = (ans*2)%M+bits[--j];
            }
        }
        return ans;
    }
};