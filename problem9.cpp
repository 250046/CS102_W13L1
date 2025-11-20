#include <iostream>
using namespace std;

void avg(const double* arr, int size, double* result) {
    double s = 0;
    const double* p = arr;

    for (int i = 0; i < size; i++) {
        s += *p;
        p++;
    }

    *result = s / size;
}

int main() {
    int n;
    cin >> n;

    double a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    double res;
    avg(a, n, &res);

    cout << res;

    return 0;
}
