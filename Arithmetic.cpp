//Problem : ARITHMETIC SLICES
//Problem Link: https://leetcode.com/problems/arithmetic-slices/description/?envType=study-plan&id=dynamic-programming-i

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int count = 0, ans = 0, diff = INT_MAX;
        for (int i = 1; i < A.size(); i++) {
            int newDiff = A[i] - A[i-1];
            if (newDiff == diff) ans += count++;
            else {
                diff = newDiff;
                count = 1;
            }
        }
        return ans;
    }
};
