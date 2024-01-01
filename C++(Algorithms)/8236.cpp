#include<iostream>

using namespace std;

void bubble_sort(int arr[], int size) {
    int i, j;
   for (int i = 0; i < size; i++) {
    for (int j = 0; j < size - i - 1; j++) {
        if (arr[j-1] % 2 == 0 && arr[j] % 2 == 0) {
           
            if (arr[j-1] < arr[j]) {
                swap(arr[j-1], arr[j]);
            }
        }
        if (arr[j-1] % 2 == 1 && arr[j] % 2 == 1) {
           
            if (arr[j-1] > arr[j]) {
                swap(arr[j-1], arr[j]);
            }
        }
    }
}

}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubble_sort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

