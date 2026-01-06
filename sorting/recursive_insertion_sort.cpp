#include <bits/stdc++.h>
using namespace std;

// recursive insertion sort
void recInsertionSort(int arr[], int n) {
    // base case
    if (n <= 1) return;

    // sort first n-1 elements
    recInsertionSort(arr, n - 1);

    // insert last element at correct position
    int last = arr[n - 1];
    int j = n - 2;

    // shift elements greater than last to the right
    while (j >= 0 && arr[j] > last) {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = last;
}

int main() {
    int arr[] = {23, 78, 1, 100, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    recInsertionSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
