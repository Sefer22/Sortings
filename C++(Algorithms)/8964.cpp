#include<iostream>
#include<vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> A(n);

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int max = A[0];
    for (int i = 0; i < n; i++) {
        if (A[i] > max) {
            max = A[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (A[i] == max) {
            int temp = A[i];
            for (int j = i; j < n - 1; j++) {
                A[j] = A[j + 1];
            }
            A[n - 1] = temp;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }

    return 0;
}

