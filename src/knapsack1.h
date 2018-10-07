/* given N items and one knapsack. Each item has a cost c[i] and a value v[i]. The knapsack has a volume of V, which means the sum of cost of the items in the knapsack cannot exceed V. Find the maximum value you can gain with the knapsack.
 *
 * solution: DP 
 * trasition equation: f[i][v] = max{ f[i-1][v], f[i-1][v-c[i]] + w[i] }
 * where f[i][v] is the maximum value we get from the previous i items with a exact total cost of v
 */

#include <vector>
#include <cassert>
#include <climits>
#include <algorithm>

int knapsack_01_basic_2D(int V, std::vector<int>& cost, std::vector<int>& value);

// optimize space complexity: using 1D DP array by adjusting iteration order
int knapsack_01_1D(int V, std::vector<int>& cost, std::vector<int>& value);

// find the maximum value we can get with exactly V cost
// the only thing to change is the initial state
int knapsack_01_exact_cost(int V, std::vector<int>& cost, std::vector<int>& value);
