//Problem Name:-Pascal's Triangle II
//Problem Link:-https://leetcode.com/problems/pascals-triangle-ii/?envType=study-plan&id=dynamic-programming-i

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result(rowIndex + 1);
        for (int i = 0; i < result.size(); ++i) {
            int prev_result = result[0] = 1;
            for (int j = 1; j <= i; ++j) {
                const int tmp = result[j];
                result[j] += prev_result;
                prev_result = tmp;
            }
        }
        return result;
    }
};
