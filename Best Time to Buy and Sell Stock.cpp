// Day 9

#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int result = 0, profit = 0;
    int minPrice = prices[0];
    for(int i = 0; i < prices.size(); i++) {
        minPrice = min(minPrice, prices[i]);
        profit = prices[i] - minPrice;
        result = max(result, profit);
    }
    return result;
}