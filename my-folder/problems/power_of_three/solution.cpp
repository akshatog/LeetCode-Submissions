class Solution {
public:
    bool isPowerOfThree(int n) {
        //Brute force
        
        // if (n<=0) return false;
        // // bool flag = 0;
        // double x = n;
        // while(x > 1){
        //     x = x/3.0;
        // }
        // if(x == 1) return true;
        // else return false;

        //2nd approach - better approach - no use of unnessary variables 
        if(n<=0) return false;

        while(n%3 ==0){
            n = n/3;
        }
        if(n == 1) return true;
        else return false;

        
    }
};