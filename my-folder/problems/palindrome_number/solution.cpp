class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        int temp2 = x;
        if (x<0){
            return false;
        }
        else if(x<=9){
            return true;
        }
        else{
            int count = 0;
            while(temp!= 0){
                temp = temp/10;
                count++;
            }
            int rem;
            long long rev = 0;
            for(int i = count-1;i>=0;i--){
                rem = temp2%10;
                temp2 = temp2/10;
                rev = rev + rem*(long long)pow(10,i);
            }
            if(x == rev){
                return true;
            }
            else return false;
        }
    }
};