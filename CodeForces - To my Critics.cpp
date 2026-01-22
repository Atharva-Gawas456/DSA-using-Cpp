#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int arr[3];

        for (int i = 0; i < 3; i++) {
            cin >> arr[i];
        }

        insertionSort(arr, 3);

        if (arr[0] + arr[1] >= 10) {
            cout << "YES";
        } else {
            cout << "NO";
        }
        cout << endl;
    }

    return 0;
}
