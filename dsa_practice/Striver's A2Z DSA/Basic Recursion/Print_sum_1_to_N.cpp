#include<iostream>
using namespace std;

int print_sum(int sum, int n) {
    if(n == 0) {
        return sum;
    }

    sum += n;
    print_sum(sum, --n);
}

int main() {
    cout << print_sum(0, 11);
}