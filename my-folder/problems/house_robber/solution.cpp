class Solution {
public:

    int solve(int i,vector<int> &arr, vector<int> &memo ){
        if(i<0) return 0;

        if(memo[i] != -1){
            return memo[i];
        }

        memo[i] = max(arr[i] + solve(i-2,arr,memo) , solve(i-1,arr,memo));
        return memo[i];
    }

    int rob(vector<int>& arr) {
        int n = arr.size();
        vector<int> memo(n,-1);
        return solve(n-1,arr,memo);
    }
};