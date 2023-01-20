//PROBLEM NAME: -Best Time to Buy and Sell Stock II
//PROBLEM LINK: -https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/?envType=study-plan&id=dynamic-programming-i


class Solution {
    public int maxProfit(int[] prices) {
        int i = 0;
        int valley = prices[0];
        int peak = prices[0];
        int maxprofit = 0;
        while (i < prices.length - 1) {
            while (i < prices.length - 1 && prices[i] >= prices[i + 1])
                i++;
            valley = prices[i];
            while (i < prices.length - 1 && prices[i] <= prices[i + 1])
                i++;
            peak = prices[i];
            maxprofit += peak - valley;
        }
        return maxprofit;
    }
}
