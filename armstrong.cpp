#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, digits = 0, sum = 0;

    cin >> num;
    original = num;

    // Count the number of digits
    while (num != 0) {
        digits++;
        num /= 10;
    }

    // Handle the case when the input is 0
    if (original == 0) {
        digits = 1;
    }

    num = original;

    // Calculate the sum of each digit raised to the power of 'digits'
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    // Handle the case when the input is 0
    if (original == 0) {
        sum = 0;
    }

    if (sum == original)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}