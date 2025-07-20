#include<iostream>
using namespace std;

void print_numbers(int n) {
    if(n == 0) {
        return;
    }

    cout << n << " ";
    n--;
    print_numbers(n);
}

int main() {
    print_numbers(5);
}