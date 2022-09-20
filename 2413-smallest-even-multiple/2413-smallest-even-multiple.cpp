class Solution {
public:
    int smallestEvenMultiple(int n) {
        int res = n;
        int temp = n;
        if(n%2==0){
            return n;
        }
        
        for(int i=1;i<=10;i++){
            temp*=i;
            if(temp%2==0){
                res = temp;
                break;
            }
        }
        return res;
    }
};