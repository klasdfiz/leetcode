class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        if (size <= 1)
        {
        	return 0;
        }
        int res = 0;
        for (int i = 1; i < size; i++)
        {
        	if (prices[i] > prices[i-1])
        	{
        		res += prices[i] - prices[i-1];
        	}
        }
        return res;
    }
};