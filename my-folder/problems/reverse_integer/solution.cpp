class Solution {
public:
    int reverse(int x) {
        if(x== 0)  return 0;
        long long rev = 0;
        while(x != 0){
            int digit = x %10;
            rev = (rev*10) + digit;
            x = x/10;
        }
        // // if (n<0) return rev*(-1);
        if(rev >= INT_MAX || rev <= INT_MIN){
            return 0;
        }
        return rev;
        
    }
};