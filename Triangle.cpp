//Problem Name: Triangle
//Problem Link: https://leetcode.com/problems/triangle/?envType=study-plan&id=dynamic-programming-i

class Solution {
public:
    int minimumTotal(vector<vector<int>>& T) {
        for (int i = T.size() - 2; ~i; i--) 
            for (int j = T[i].size() - 1; ~j; j--) 
                T[i][j] += min(T[i+1][j], T[i+1][j+1]);
        return T[0][0];
    }
};
