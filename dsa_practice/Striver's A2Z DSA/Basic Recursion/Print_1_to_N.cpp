#include<iostream>
using namespace std;

void print_numbers(int i, int n) {
    if(i > n) {
        return;
    }

    cout << i << " ";
    i++;
    print_numbers(i, n);
}

int main() {
    print_numbers(1, 10);
}