#include <iostream>
using namespace std;

// Function to return the larger number
int findLargest(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int num1, num2;

    cin >> num1 >> num2;

    cout << "Larger number = " << findLargest(num1, num2);

    return 0;
}