#include <iostream>
using namespace std;

// Function to swap two numbers
void swapNumbers(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;

    cin >> num1 >> num2;

    swapNumbers(num1, num2);

    cout << "After swapping:" << endl;
    cout << "First number = " << num1 << endl;
    cout << "Second number = " << num2 << endl;

    return 0;
}