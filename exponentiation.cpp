#include <iostream>
using namespace std;

// Function to calculate x^n
long long power(int x, int n) {
    long long result = 1;

    for (int i = 1; i <= n; i++) {
        result *= x;
    }

    return result;
}

int main() {
    int x, n;

    cin >> x >> n;

    cout << "Result = " << power(x, n);

    return 0;
}