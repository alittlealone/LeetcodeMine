class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty())
            return 0;
        int max = 0;
        vector<int>::iterator it;
        for(it = prices.begin(); it != prices.end() - 1; it++) {
            if(*(it + 1) > *it) 
                max = max + *(it + 1) - *it;
        }
        return max;
    }
};