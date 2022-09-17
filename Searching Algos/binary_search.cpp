#include<iostream>
using namespace std;

bool binaryS(int arr[], int size, int key) {
    int s  = 0;
    int e = size-1;
    int mid = s + (e-s)/2;

    while(s <= e) {
        if(arr[mid] == key) {
            return true;
        }
        else if(arr[mid] < key) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return false;
}

int main() {
    int arr[7] = {2,4,5,6,8,10,12};
    int key;
    cout << "Enter the key :";
    cin >> key;

    bool found = binaryS(arr,7,key);
    if(found) {
        cout << "The key is present";
    }
    else {
        cout << "The key is absent";
    }
}