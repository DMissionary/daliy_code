#include <iostream>
#include <vector>

using namespace std;


vector<vector<int>> triangle = {
    {5},
    {8, 3},
    {12, 7, 9},
    {4, 6, 8, 2},
    {6, 9, 3, 6, 1}
};

int Path() {
    int totalSum = 0;
    int currentRow = 0;
    int currentCol = 0;

    while (currentRow < triangle.size() - 1) {
        totalSum += triangle[currentRow][currentCol];
        

        if (triangle[currentRow + 1][currentCol] > triangle[currentRow + 1][currentCol + 1]) {
            currentRow++;
        } else {
            currentRow++;
            currentCol++;
        }
    }


    totalSum += triangle[currentRow][currentCol];

    return totalSum;
}

int main() {
    int maxSum = Path();
    cout << "最大和路径的总和为：" << maxSum << endl;
    return 0;
}

