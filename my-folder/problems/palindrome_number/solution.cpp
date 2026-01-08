class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        if (x<0){
            return false;
        }
        else if(x<=9){
            return true;
        }
        else{
            long long rev = 0;
        while(x != 0){
            int rem = x%10;
            x /= 10;
            rev = rev*10 + rem;
        }
            if(temp == rev){
                return true;
            }
            else return false;
        }
    }
};