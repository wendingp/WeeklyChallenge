#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
    int minCostClimbingStairs(vector<int> &cost) {
            size_t size = cost.size();
    
            vector<int> dp(size, 0);
    
            dp[0] = cost[0];
            dp[1] = cost[1];
    
            for (int i = 2; i < size; ++i) {
                        dp[i] = min(dp[i - 1], dp[i - 2]) + cost[i];
                    }
            return min(dp[size - 1], dp[size - 2]);
        }
};

