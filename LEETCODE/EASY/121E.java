class Solution {
    public int maxProfit(int[] prices) {
        int lowPriced = 0;

        for (int i = 0; i < prices.length; i++) {
            if(prices[i] < prices[lowPriced]){
                lowPriced = i;
            }
        }

        int  highPriced = lowPriced;
        for (int j = lowPriced + 1; j < prices.length; j++) { 
            if(prices[j] > prices[highPriced]){
                highPriced = j;
            }
        }
        return prices[highPriced]-prices[lowPriced];
    }
}