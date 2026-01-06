class Solution {
public:
    bool isPowerOfTwo(int n) {
        double base = 2;
        double x = n;
        double y = log2(n);
        bool flag = 0;
        for(int i = -31;i<= 31;i++){
            if(y == i){
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            return true;
        }
        else return false;
    }
};