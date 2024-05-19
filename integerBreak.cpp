#include <iostream>
#include <algorithm>

class Solution{
public:
	int integerBreak(int n){
		vector<int> dp(n+1);
		dp[2] = 1;
		for(int i = 3; i <= n; i++){
			for(int j = 1; j < n/2; j++){
				dp[i] = max(dp[i],max(dp[i-j]*i,(i-j)*j));
			}
		}
		return dp[n];
	}
};