'''
PROBLEM NAME: Best Time to Buy and Sell Stock
PROBLEM LINK: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/?envType=study-plan&id=dynamic-programming-i
'''
class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        minVal = 10000
        maxDiff = 0
        
        for i in range(len(prices)):
            minVal = min(prices[i], minVal)
            maxDiff = max(prices[i]-minVal, maxDiff)
            
        return maxDiff
