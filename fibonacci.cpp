#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int f1 = 0;
    int f2 = 1;
    int fib,temp;
    cout << f1 << f2;
    for(int i = 1; i<=n ; i++){
        fib = f1+f2;
        cout << fib;
        f1 = f2;
        f2 = fib;
    }
    
    return 0;
}
