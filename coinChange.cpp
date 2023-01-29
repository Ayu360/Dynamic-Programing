// Problem Name: coin change ii
// Problem Link: https://leetcode.com/problems/coin-change-ii/description/

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> dp(amount+1);
        dp[0] = 1;
        for(auto& x:coins){
            for(int i=x;i<=amount;i++){
                dp[i] += dp[i-x];
            }
        }
        return dp[amount];
    }
};
