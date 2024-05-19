#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

void bag01(){
	vector<int> weight = {1,3,4};
	vector<int> value = {15,20,30};
	int bagweight = 4;
	vector<vector<int>> dp(weight.size(),vector<int>(bagweight+1,0));
	for(int j = weight[0]; j <= bagweight; j++){
		dp[0][j] = value[0];
	}
	for(int i = 1; i < weight.size(); i++){
		for(int j = 0; j <= bagweight; j++){
			if(j < weight[i]){
				dp[i][j] = dp[i-1][j];
			}
			else{
				dp[i][j] = max(dp[i-1][j - weight[i]] + value[i],dp[i-1][j]);
			}
		}
	}
	cout << dp[weight.size() - 1][bagweight] << endl;
}

int main(){
	bag01();
	return 0;
}
