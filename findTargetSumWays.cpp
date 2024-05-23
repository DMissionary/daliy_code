class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
		int sum = 0;
		for(int i = 0; i < nums.size(); i++){
			sum += nums[i];
		}
		if(abs(S) > sum){
			return false;
		}
		if((S+sum)%2 ==1){
			return false;
		}
		int bagsize = (S+sum)/2;
		vector<int> dp(bagsize+1,0);
		dp[0]=1;
		for(int i = 0; i < nums.size(); i++){
			for(int j = bagsize; j >= nums[i]; j--){
				dp[j] = dp[j-nums[i]];
			}
		}
    }
};
