class Solution {
public:
    int reverse(int x) {
        int temp = x;
        int temp2 = x;
        long long rev = 0;
        int rem;
        int count = 0;
        while(temp != 0){
            temp /= 10;
            count++;
        }
        for(int i = count-1;i>=0;i--){
            rem = temp2 % 10;
            temp2 = temp2 / 10;
            rev = rev + rem*(long long)pow(10,i); 
        }
        if(rev >= INT_MAX || rev<= INT_MIN){
            return 0;
        }
        else return rev;
    }
};