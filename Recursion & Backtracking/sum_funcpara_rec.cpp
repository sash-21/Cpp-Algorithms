// Sum of the first n numbers.

#include<iostream>
using namespace std; 

int func(int n) { //Functional Method
    if(n == 0) {
        return 0;
    }
    return n + func(n-1);
}

void para(int i, int sum) { //Paramaterised Method
    if(i < 1) {
        cout << sum;
        return;
    }
    para(i-1, sum+i);
}

int main() {
    cout << func(4);
    para(4,0);
    return 0;
}
