//Problem Name: word break
//Problem Link: https://leetcode.com/problems/word-break/?envType=study-plan&id=dynamic-programming-i

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        vector<bool> dp(n+1, false);
        dp[n] = true;
        
        for(int i = n-1; i >= 0; --i){
            dp[i] = find(wordDict.begin(), wordDict.end(), s.substr(i)) != wordDict.end();
            
            
            for(int j = n; j >= i+1; --j){
                dp[i] = dp[j] && find(wordDict.begin(), wordDict.end(), s.substr(i, j-i)) != wordDict.end();
                if(dp[i]) break;
            }
        }
        
        return dp[0];
    }
};
