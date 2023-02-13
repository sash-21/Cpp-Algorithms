#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void methtwo(int arr[], int i, int n) { //Method 2 using single pointer (formula approach)
    if(i >= n/2) return;

    swap(arr[i], arr[n-i-1]); // *****
    methtwo(arr, i+1, n);
}

void methone(int arr[], int l, int r) { //Method 1 using double pointer(two pointer approach)
    if(l >= r) return;

    swap(arr[l], arr[r]); // *****
    methone(arr, l+1, r-1);
}

int main() {
    int n;
    cout << "Enter value of n :";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    methone(arr, 0, n-1);
    for(int i = 0; i < n; i++) {
        cout << arr[i];
    }
    return 0;
}