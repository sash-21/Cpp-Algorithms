#include<iostream>
using namespace std;

void sort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0) {
            if(arr[j] > temp) {
                arr[j+1] = arr[j];
                j--;
            }
            else {
                break;
            }
        }
        arr[j+1] = temp;
    }
}

void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[7] = {1,10,7,4,8,2,11};
    int n = 7;

    sort(arr,n);
    print(arr,n);
}