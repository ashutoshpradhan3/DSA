#include <iostream>
using namespace std;

void printArr(int arr[], int num) {
    for (int i = 0; i < num; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOne(int arr[], int num) {
    int start = 0;
    int mid = 0;
    int end = num - 1;

    while (mid <= end) {
        if (arr[mid] == 0) {
            swap(arr[start], arr[mid]);
            mid++;
            start++;
        } else if (arr[mid] == 1) {
            mid++;
        } else { // arr[mid] == 2
            swap(arr[mid], arr[end]);
            end--;
        }
    }
}

int main() {
    int arr[] = {0, 1, 2, 0, 0, 2, 2, 2, 1, 1, 2};

    sortOne(arr, 11);
    printArr(arr, 11);

    return 0;
}



