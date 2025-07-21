// Approach : Parametric recursion

#include<iostream>
using namespace std;

int print_factorial(int factor, int n) {
    if(n == 0) {
        return factor;
    }

    factor *= n;
    print_factorial(factor, --n);
}

int main() {
    cout << print_factorial(1, 6);
}

// Approach : functional recursion

#include<iostream>
using namespace std;

int print_factorial(int n) {
    if(n == 0) {
        return 1;
    }

    return n * print_factorial(n-1);
}

int main() {
    cout << print_factorial(5);
}
