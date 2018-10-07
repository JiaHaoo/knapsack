#include "knapsack1.hpp"

int knapsack_01(int V, vector<int>& cost, vector<int>& value)
{
	assert(cost.size() == value.size());
	vector<vector<int>> dp(1 + cost.size(), vector<int>(V, 0));
	

}
