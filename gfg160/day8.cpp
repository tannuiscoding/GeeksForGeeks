//Max profit only one transaction allowed
class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int min=prices[0];
        int res=0;
        for(int i=1; i<prices.size();i++){
            if(prices[i]<min) min=prices[i];
            int profit=prices[i]-min;
            if(profit>res) res=profit;
        }
        return res;
    }
};
