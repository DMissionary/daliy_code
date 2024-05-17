#include <iostream>

using namespace std;

int main(){
	double sum = 0.0;
	double item = 1.0;
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		sum += (item/=i);
	}
	cout << sum << endl;
	return sum;
}
