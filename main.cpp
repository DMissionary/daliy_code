#include <iostream>
#include <vector>
#include <string>
#include "calculate_total_length.h" // include h file 
#include "compare_length.h" // include h file

using namespace std;


int main()
{
	// array init
	string arr_init[] = {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
	// vector init
	vector<string> arr(arr_init, arr_init + sizeof(arr_init) / sizeof(arr_init[0]));
	

    // 1. call a function to calculate the sum of lengths
    int totalLength = CalculateTotalLength(arr);
    // output results
    cout << "Total length of all strings: " << totalLength << endl;

    // 2. call a function to compare the length of any two positions
    int index1 = 1; 
    int index2 = 4;
    // TODO error3: please fix
    CompareLength(arr, index1, index2);
    
    return 0;
}
