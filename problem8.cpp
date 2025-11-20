#include <iostream>
using namespace std;

void reverseArr(int** arr, int size) {
    int* base = *arr;
    int* left = base;
    int* right = base + size - 1;

    while (left < right) {
        int tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int* p = a;
    reverseArr(&p, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << (i + 1 == n ? "" : " ");

    return 0;
}
