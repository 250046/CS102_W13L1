#include <iostream>
using namespace std;

int removeValue(int* arr, int size, int val) {
    int* write = arr;
    int* read = arr;

    for (int i = 0; i < size; i++) {
        if (*read != val) {
            *write = *read;
            write++;
        }
        read++;
    }

    return static_cast<int>(write - arr);
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int val;
    cin >> val;

    int newSize = removeValue(a, n, val);

    for (int i = 0; i < newSize; i++)
        cout << a[i] << (i + 1 == newSize ? "" : " ");

    return 0;
}
