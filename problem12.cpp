#include <iostream>
using namespace std;

bool identical(const int* a, int** bptr, int size) {
    const int* p = a;
    int* qb = *bptr;

    for (int i = 0; i < size; i++) {
        if (*p != *(qb + i))
            return false;
        p++;
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int b[n];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int* pb = b;

    cout << identical(a, &pb, n);

    return 0;
}
