#include<iostream>
using namespace std;

void print(int i, int n) {
    if (i > n) {
        return;
    }
    cout << "Sahil" << " ";
    print(i+1, n);
}

int main() {
    int n; 
    cin >> n;
    print(1, n);
    return 0;
}