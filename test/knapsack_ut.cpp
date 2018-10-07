#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../src/knapsack1.h"

TEST_CASE( "01 knapsack problem test case 1", "knapsack-01" ) {
    int V = 50;
    std::vector<int> cost = {10, 20, 30};
    std::vector<int> value = {60, 100, 120};

    REQUIRE( 220 == knapsack_01_basic_2D(V, cost, value));
    REQUIRE( 220 == knapsack_01_1D(V, cost, value));
    REQUIRE( 220 == knapsack_01_exact_cost(V, cost, value));
}


TEST_CASE( "01 knapsack problem", "knapsack-01" ) {
    int V = 165;
    std::vector<int> cost = {22, 31, 29, 44, 53, 38, 63, 85, 89, 82};
    std::vector<int> value = {92, 57, 49, 68, 60, 43, 67, 84, 87, 72};

    REQUIRE( 309 == knapsack_01_basic_2D(V, cost, value));
    REQUIRE( 309 == knapsack_01_1D(V, cost, value));
    REQUIRE( 309 == knapsack_01_exact_cost(V, cost, value));
}
