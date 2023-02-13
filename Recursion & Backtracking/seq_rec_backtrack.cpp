// Printing sequence 1 to N and N to 1 using backtracking.

#include<iostream>
using namespace std;

void print(int i, int n) {
    if(i > n) {
        return;
    }
    print(i+1, n);
    cout << i << " ";
}

int main() {
    int n;
    cin >> n;
    print(1, n);
    return 0;
}