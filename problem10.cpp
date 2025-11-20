#include <iostream>
using namespace std;

void mergeSorted(const int* a, int n, const int* b, int m, int* out) {
    const int* pa = a;
    const int* pb = b;
    int* po = out;

    int i = 0, j = 0;

    while (i < n && j < m) {
        if (*pa <= *pb) {
            *po = *pa;
            pa++;
            i++;
        } else {
            *po = *pb;
            pb++;
            j++;
        }
        po++;
    }

    while (i < n) {
        *po = *pa;
        pa++;
        po++;
        i++;
    }

    while (j < m) {
        *po = *pb;
        pb++;
        po++;
        j++;
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int out[n + m];
    mergeSorted(a, n, b, m, out);

    for (int i = 0; i < n + m; i++)
        cout << out[i] << (i + 1 == n + m ? "" : " ");

    return 0;
}
