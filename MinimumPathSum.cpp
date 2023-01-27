//Problem Name: Minimum Path Sum
//Problem Link: https://leetcode.com/problems/minimum-path-sum/?envType=study-plan&id=dynamic-programming-i

class Solution {
public:
    int minPathSum(vector<vector<int> > &grid) {
        int N = grid.size();
        int M = grid[0].size();
        
        int scores[N][M];
        
        scores[N-1][M-1] = grid[N-1][M-1];
        for(int i = N-2; i >= 0; i--) {
            scores[i][M-1] = grid[i][M-1] + scores[i+1][M-1];
        }
        
        for(int j = M-2; j >= 0; j--) {
            scores[N-1][j] = grid[N-1][j] + scores[N-1][j+1];
        }
        
        for(int i = N-2; i >= 0; i--) {
            for(int j = M-2; j >= 0; j--) {
                scores[i][j] = grid[i][j] + min(scores[i+1][j], scores[i][j+1]);
            }
        }
        
        return scores[0][0];  
    }
};
