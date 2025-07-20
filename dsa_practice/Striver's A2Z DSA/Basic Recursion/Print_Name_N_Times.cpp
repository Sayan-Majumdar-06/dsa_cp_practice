#include<iostream>
#include<string>
using namespace std;

void print_name(string s, int n) {
    if(n == 0) {
        return;
    }

    cout << s << endl;
    n--;
    print_name("Sayan", n);
}

int main() {
    print_name("Sayan", 5);
}