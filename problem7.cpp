#include <iostream>
using namespace std;

int* findMax(int* arr, int size) {
    int* p = arr;
    int* maxp = arr;

    for (int i = 1; i < size; i++) {
        p++;
        if (*p > *maxp)
            maxp = p;
    }

    return maxp;
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int* mp = findMax(a, n);
    cout << *mp;

    return 0;
}
