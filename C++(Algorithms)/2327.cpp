#include <iostream>

using namespace std;

void insertion_sort(int arr[], int size) {
    int element;
    for (int i = 1; i < size; i++) {
        element = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] % 2 == 1 && element < arr[j]) {
            arr[j + 1] = arr[j];
            j--;
        }
        while (j >= 0 && arr[j] % 2 == 0 && element > arr[j]) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = element;
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // T?k ?d?dl?ri artan siradaki kimi sirala
    insertion_sort(a, n);

    // Yalniz t?k ?d?dl?ri çap et
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 1) {
            cout << a[i] << " ";
        }
    }

    // Cüt ?d?dl?ri azalan siradaki kimi sirala
    insertion_sort(a, n);

    // Yalniz cüt ?d?dl?ri çap et
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            cout << a[i] << " ";
        }
    }

    return 0;
}

