class Solution {
public:
    int fib(int n) {
        if(n==0){
            return 0;
        }
        else if(n==1){
            return 1;
        }
        // else{
        //     return fib(n-2) + fib(n-1);
        // }
        else {
// int next_num; - instead of using the 3rd variable ere i can simply return b as i am putting it's value in b itself. so i can declare it inside the loop and reduce my space complexity.
            int a = 0, b = 1;
            for(int i = 1;i<n;i++){
                int next_num = a + b;
                a = b;
                b = next_num;
            }
            return b;
        }

    }
};