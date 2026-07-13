class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int prof = 0, curr = prices[0], currmax = 0;
        for(int i = 1; i< prices.size();i++){
            if(prices[i]< curr) curr = prices[i];
            else {currmax = prices[i]- curr;
            prof = max(currmax,prof);}
        } return prof;
    }
};