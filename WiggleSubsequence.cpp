// Problem Name: Wiggle Subsequence
// Problem Link: https://leetcode.com/problems/wiggle-subsequence/?envType=study-plan&id=dynamic-programming-i

class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
    int i = 1;
    while (i < nums.size() && nums[i] == nums[i - 1]) {
        i++;
    }
    if (i == nums.size()) {
        // all nums[i] are equal
        return 1;
    }
    int sign = nums[i] > nums[i - 1] ? 1 : -1;
    int count = 2;
    i++;
    while (i < nums.size()) {
        if ((nums[i] - nums[i - 1]) * sign < 0) {
            // nums[i] is an extremum
            count++;
            sign = -sign;
        }
        i++;
    }
    return count;
}
};
