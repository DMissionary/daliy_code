#include <iostream>  
#include <vector>    
#include <algorithm> 
using namespace std;
class Solution{
	public:
		int minCostClimbingStairs(vector<int>& cost){
			vector<int> dp(cost.size()+1);
			dp[0] = 0;
			dp[1] = 0;
			for(int i = 2; i <= cost.size(); i++){
				dp[i] = min(dp[i-1] + cost[i-1],dp[i-2] + cost[i-2]);
			}
			return dp[cost.size()];
		}		
};

int main() {
    Solution solution;
    vector<int> cost = {10, 15, 20};
    cout << "Minimum cost to climb stairs: " << solution.minCostClimbingStairs(cost) << endl;
    return 0;
}

