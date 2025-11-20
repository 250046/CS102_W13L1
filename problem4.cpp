#include <iostream>
using namespace std;

void fixNeg(int* arr, int size) {
    int* p = arr;
    for (int i = 0; i < size; i++) {
        if (*p < 0)
            *p = 0;
        p++;
    }
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    fixNeg(a, n);

    for (int i = 0; i < n; i++)
        cout << a[i] << (i + 1 == n ? "" : " ");

    return 0;
}
