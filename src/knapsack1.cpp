#include "knapsack1.h"


int knapsack_01_basic_2D(int V, std::vector<int>& cost, std::vector<int>& value)
{
	assert(cost.size() == value.size());
	std::vector<std::vector<int>> dp(1 + cost.size(), std::vector<int>(1 + V, 0));
    
    for (int i = 1; i < dp.size(); ++i)
    {
        for (int j = 1; j < dp[i].size(); ++j)
        {
            if (j >= cost[i - 1])
                dp[i][j] = std::max(dp[i - 1][j], dp[i - 1][j - cost[i - 1]] + value[i - 1]);
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    return dp.back()[V];
}

// optimize space complexity: using 1D DP array by adjusting iteration order
int knapsack_01_1D(int V, std::vector<int>& cost, std::vector<int>& value)
{
    std::vector<int> dp(1 + V, 0);

    for (int i = 0; i < cost.size(); ++i)
    {
        for (int j = V; j >= cost[i]; --j)
        {
            dp[j] = std::max(dp[j], dp[j - cost[i]] + value[i]);
        }
    }
    return dp[V];
}


// find the maximum value we can get with exactly V cost
// the only thing to change is the initial state
int knapsack_01_exact_cost(int V, std::vector<int>& cost, std::vector<int>& value)
{
    std::vector<int> dp(1 + V, INT_MIN);
    dp[0] = 0;

    for (int i = 0; i < cost.size(); ++i)
    {
        for (int j = V; j >= cost[i]; --j)
        {
            dp[j] = std::max(dp[j], dp[j - cost[i]] + value[i]);
        }
    }
    return *std::max_element(dp.begin(), dp.end());
}


