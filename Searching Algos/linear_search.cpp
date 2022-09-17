#include<iostream>
using namespace std;

bool linearS(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[6] = {1,3,5,7,9,11};
    int key;
    cout << "Enter the key :";
    cin >> key;

    bool found = linearS(arr,6,key); 
    if(found) {
        cout << "The element is present" << endl;
    }
    else {
        cout << "The element is absent" << endl;
    }
}