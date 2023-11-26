#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // if elements on the left half are still left //
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // transfering all elements from temporary to arr //
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void merge_sort(vector<int>& arr, int low, int high) {
    // Base Case
    if (low >= high) return; 

    // Recursion Calls
    int mid = (low + high) / 2 ;
    merge_sort(arr, low, mid);  // left half
    merge_sort(arr, mid + 1, high); // right half

    // Processing
    merge(arr, low, mid, high);  // merging sorted halves
}

void print(vector<int>& arr, int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {3,1,2,4,1,5,2,6,4};
    int n = 9;
    merge_sort(arr,0,n-1);
    print(arr,n);
}