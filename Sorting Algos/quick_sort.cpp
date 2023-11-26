#include<iostream> 
#include<bits/stdc++.h>
using namespace std;

int place(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i = low, j = high;
    while(i < j) {
        while(arr[i] <= pivot && i <= high-1) {
            i++;
        }
        while(arr[j] > pivot && j >= low+1) {
            j--;
        }
        if(i < j) {
            swap(arr[i], arr[j]);
        } 
    }
    swap(arr[low],arr[j]);
    return j;
}

void quick_sort(vector<int>& arr, int low, int high) {
    if(low < high) {
        int partn = place(arr,low,high);
        quick_sort(arr,low,partn-1);
        quick_sort(arr,partn+1,high);
    }
}

void print(vector<int>& arr, int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = 8;
    quick_sort(arr,0,n-1);
    print(arr,n);
}