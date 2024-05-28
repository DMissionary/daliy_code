#include <iostream>
#include <vector>

using namespace std;

int Fib(int n){
    vector<int> dp(n + 1);
    dp[1] = dp[2] = 1;
    for(int i = 3; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main(){
    int n;
    cout << "输入你想要求的第n个Fibonacci数：";
    cin >> n; 
    cout << "第" << n << "个Fibonacci数是：" << Fib(n) << endl;
    return 0;
}

