class Solution {
public:
    int maxProfit(vector<int>& prices) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        int min_ele=INT_MAX;
        int n=prices.size();
        int max_price=INT_MIN;
        for(int i=0;i<n;i++){
            min_ele=min(prices[i],min_ele);
            max_price=max(max_price,prices[i]-min_ele);
        }
        return max_price;
    }
};
