// Factorial of first n numbers

#include<iostream>
using namespace std;

void para(int i, int fact) {  // Parameterised Method
    if(i < 1) {
        cout << fact;
        return;
    }
    para(i-1, fact*i);
}

int func(int n) {  // Functional Method
    if(n == 0) {
        return 1;
    }
    return n * func(n-1);
}

int main() {
    int choice;
    cout << "Enter choice :";
    cin >> choice;
    if(choice == 1) {
        int i;
        cout << "Enter the i value :";
        cin >> i;
        para(i, 1);
    }
    else {
        int n;
        cout << "Enter the n value :";
        cin >> n;
        cout << func(n);
    }
    return 0;
}