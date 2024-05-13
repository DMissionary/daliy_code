#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<vector<int>> triangle = {
        {7},
        {3, 8},
        {8, 1, 0},
        {2, 7, 4, 4},
        {4, 5, 2, 6, 5}
    };

    vector<vector<int>> dp(triangle.size(), vector<int>(triangle.back().size(), 0));

    dp.back() = triangle.back();

    for (int i = triangle.size() - 2; i >= 0; --i) {
        for (int j = 0; j < triangle[i].size(); ++j) {
            dp[i][j] = triangle[i][j] + max(dp[i+1][j], dp[i+1][j+1]);
        }
    }

    int max_sum = dp[0][0];
    cout << "从顶部到底部的最大和路径的和为: " << max_sum << endl;

    return 0;
}

