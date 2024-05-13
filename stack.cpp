#include <iostream>
#include <stack>
#include <string>

using namespace std;

string reverseStringUsingStack(const string& input) {
    stack<char> charStack;
    string result;

    for (char c : input) {
        charStack.push(c);
    }

    while (!charStack.empty()) {
        result += charStack.top();
        charStack.pop();
    }

    return result;
}

int main() {
    char input[100]; 
    cout << "Enter a string: ";
    scanf("%s", input); 

    string reversed = reverseStringUsingStack(input);
    cout << "Original: " << input << endl;
    cout << "Reversed: " << reversed << endl;

    return 0;
}

