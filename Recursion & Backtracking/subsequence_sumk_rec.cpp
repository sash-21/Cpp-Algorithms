// Print all subsequences with the sum as 'K'

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printS(int i, vector<int> &ds, int s, int sum, int arr[], int n) {
    if(i == n) {
        if(s == sum) {
            for(auto it : ds) cout << it << " ";
            cout << endl;
        }
        return;
    }

    //Picking
    ds.push_back(arr[i]);
    s += arr[i];
    printS(i+1, ds, s, sum, arr, n);

    //Unpicking
    s -= arr[i];
    ds.pop_back();
    printS(i+1, ds, s, sum, arr, n);
}

int main() {
    int arr[] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    printS(0, ds, 0, sum, arr, n);
}