// Problem: Climbing Stairs
// Platform: LeetCode
// Difficulty: Easy
// Topic: Dynamic Programming

class Solution {
public:
int solveuserec(int n,vector<int>&dp){
    // base case
    if(n==0 || n==1) return 1;

    if(dp[n]!=-1) return dp[n];
    //logic
    dp[n]=solveuserec(n-1,dp)+solveuserec(n-2,dp);
    int ans=dp[n];
    return ans;
}
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        int ans=solveuserec(n,dp);
        return ans;
    }
};