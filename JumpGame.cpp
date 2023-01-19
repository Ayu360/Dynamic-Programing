//PROBLEM LINK: "https://leetcode.com/problems/jump-game/?envType=study-plan&id=dynamic-programming-i"

class Solution {
    vector<int> dp;
public:
    
    bool possiblefrom(int start,vector<int>& nums){
        if(start >= nums.size() - 1)
            return true;
        
        if(dp[start] != -1)
            return dp[start];
        
        bool ans = false;
    
        for(int jump=nums[start];jump>0;jump--){
            ans = ans | possiblefrom(start + jump,nums);
            
            if(ans)
                break;
        }
        dp[start] = ans;
        return ans;
        
    }
    bool canJump(vector<int>& nums) {
        dp.resize(nums.size(),-1);
        return possiblefrom(0,nums);
    }
};
