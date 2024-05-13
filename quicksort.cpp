#include <iostream>
#include <vector>
using namespace std;

void quickSort(vector<int>& nums, int start, int end) {
    if (start < end) {
        int base = nums[start];
        int left = start;
        int right = end;
        while (left < right) {
           
            while (left< right && nums[right] >= base) {
                right--;
            }
            nums[left] = nums[right];
            while (left < right && nums[left] <= base){
                left++;
            }
            nums[right] = nums[left];
        }
        nums[left] = base;
        quickSort(nums, start, left - 1);
        quickSort(nums, left + 1, end);
    }
}

int main() {
    vector<int> nums = {3, 6, 8, 10, 1, 2, 1};
    int n = nums.size();

    cout << "原始数组为:" << endl;
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    quickSort(nums, 0, n - 1);

    cout << "排序后的数组为:" << endl;
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

