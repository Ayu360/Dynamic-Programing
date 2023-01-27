// Problem Name: Maximal Square
// Problem Link: https://leetcode.com/problems/maximal-square/?envType=study-plan&id=dynamic-programming-i

class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m = matrix.size();
        if(m == 0) return 0;
        int n = matrix[0].size();
        
        int maxslen = 0;
        vector<vector<int>> dp(m+1, vector(n+1, 0));
        
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                if(matrix[i-1][j-1] == '0') continue;
                //check top, left and top-left
                dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) + 1;
                maxslen = max(maxslen, dp[i][j]);
            }
        }
        
        return maxslen * maxslen;
    }
};
