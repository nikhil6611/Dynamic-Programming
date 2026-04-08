class Solution {
public:
    int helper(vector<int>& coins,int amount,int n,vector<vector<int>>&dp){
        if(n<0 && amount!=0){
            return INT_MAX-1;
        }
        if(amount==0)return 0;
        if(dp[amount][n]!=-1)return dp[amount][n];
        if(coins[n]>amount)return helper(coins,amount,n-1,dp);
        int include = 1+helper(coins,amount-coins[n],n,dp);
        int exclude=helper(coins,amount,n-1,dp);
        return dp[amount][n]=min(include,exclude);
    }
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(amount+1,vector<int>(coins.size()+1,-1));
        int ans= helper(coins,amount,coins.size()-1,dp);
        if(ans == INT_MAX-1)return -1;
        return ans;
    }
};