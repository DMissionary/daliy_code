#include <iostream>
#include <stack>

using namespace std;

void transferStack(stack<int>& fromStack, stack<int>& toStack) {
    while (!fromStack.empty()) {
        int element = fromStack.top(); 
        fromStack.pop(); 
        toStack.push(element);
    }
}

int main() {
    stack<int> originalStack;
    stack<int> newStack;

    int numElements;
    cout << "Enter the number of elements you want to push: ";
    cin >> numElements;

    cout << "Enter " << numElements << " elements: ";
    for (int i = 0; i < numElements; i++) {
        int element;
        cin >> element;
        originalStack.push(element);
    }

    
    transferStack(originalStack, newStack);

    
    cout << "Elements in the new stack: ";
    while (!newStack.empty()) {
        cout << newStack.top() << " ";
        newStack.pop();
    }
    cout << endl;

    return 0;
}


