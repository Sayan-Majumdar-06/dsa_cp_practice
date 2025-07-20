#include<iostream>
using namespace std;

void print_numbers(int i, int n) {
    if(i > n) {
        return;
    }

    print_numbers(i+1, n);
    cout << i << " ";
}

int main() {
    print_numbers(1, 10);
}