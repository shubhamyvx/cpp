//Find the larger of two numbers
#include <iostream>
using namespace std;
int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b) {
        cout << "Largest number = " << a;
    } else if (b > a) {
        cout << "Largest number = " << b;
    } else {
        cout << "Both numbers are equal";
    }

    return 0;
}