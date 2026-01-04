class Solution {
public:
    int subtractProductAndSum(int n) {
        int rem;
        long long product = 1,sum = 0;
        int diff;
        while(n !=0){
            rem = n%10;
            n = n/10;
            product = product * rem;
            sum = sum + rem;
        }
        diff = product - sum;
        return diff;
    }
};