#include <iostream>
using namespace std;

int cstrlen(char** s) {
    char* p = *s;
    int len = 0;

    while (*p != '\0') {
        ++len;
        ++p;
    }

    return len;
}

int main() {
    char buf[1000];
    cin >> buf;

    char* p = buf;
    cout << cstrlen(&p);

    return 0;
}
