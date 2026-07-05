//Calculate the factorial of a given number
#include <iostream>
using namespace std;

int main(){
    int number;
    int fact = 1;
    cin >> number;
    for (int i=number;i>0;i--){
        fact = fact * i;
    }
    cout << "Factorial = " << fact << endl;
    return 0;
}