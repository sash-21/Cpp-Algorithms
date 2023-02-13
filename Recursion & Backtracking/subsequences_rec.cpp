// Printing all Subsequences of the given list/array.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printf(int i, vector<int> &ds, int arr[], int n) {
    if(i >= n) {    // Base Case
        for(auto it : ds) {    //Printing the subsequence
            cout << it << " ";
        }
        if(ds.size() == 0) {
            cout << "{}";
        }
        cout << endl;
        return;
    }
    //Taking the current element at which i points
    ds.push_back(arr[i]);
    printf(i+1, ds, arr, n); //Moving point of i to next element

    //Not taking the current element at which i points
    ds.pop_back();
    printf(i+1, ds, arr, n); //Moving point of i to next element
}

int main() {
    int arr[] = {3, 1, 2};
    int n = 3;
    vector<int> ds;
    printf(0, ds, arr, n);
}