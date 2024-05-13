#include <iostream>
#include <vector>
using namespace std;

int bubbleSort(vector<int>& arr){
	int n = arr.size();
	for(int i = 0;i < n-1;i++){
		for(int j = 0;j < n-i-1;j++){
			if(arr[j]<arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}

int main(void){
	vector<int> arr = {3, 6, 8, 10, 1, 2, 1};
	int n = arr.size();

    cout << "原始数组为:" << endl;
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
	
	bubbleSort(arr);

    cout << "排序后的数组为:" << endl;
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
