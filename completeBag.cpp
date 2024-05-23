#include <iostream>
#include <vector>
using namespace std;

void completeBag(vector<int> weight,vector<int> value,int bagWeight){
	vector<int> dp(bagWeight+1,0);
	for(int i = 0; i <= bagWeight; i++){
		for(int j = 0; j < weight.size(); j++){
			if(i-weight[j] >= 0){
				dp[i] = max(dp[i],dp[i-weight[j]+value[j]]);
			}
		}
		cout << dp[bagWeight] << endl;
	}
} 

int main() {
    int N, V;
    cin >> N >> V;
    vector<int> weight;
    vector<int> value;
    for (int i = 0; i < N; i++) {
        int w;
        int v;
        cin >> w >> v;
        weight.push_back(w);
        value.push_back(v);
    }
    completeBag(weight, value, V);
    return 0;
}
