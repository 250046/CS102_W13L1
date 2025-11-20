#include <iostream>
using namespace std;

int sum2D(int** m, int r, int c) {
    int sum = 0;

    for (int i = 0; i < r; i++) {
        int* row = *(m + i);
        for (int j = 0; j < c; j++) {
            sum += *(row + j);
        }
    }

    return sum;
}

int main() {
    int r, c;
    cin >> r >> c;

    int** mat = new int*[r];
    for (int i = 0; i < r; i++) {
        mat[i] = new int[c];
        for (int j = 0; j < c; j++)
            cin >> mat[i][j];
    }

    cout << sum2D(mat, r, c);

    for (int i = 0; i < r; i++)
        delete[] mat[i];

    delete[] mat;

    return 0;
}
