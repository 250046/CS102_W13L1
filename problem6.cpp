#include <iostream>
using namespace std;

void printIfValid(int* p) {
    if (p == nullptr)
        cout << "null";
    else
        cout << *p;
}

int main() {
    string s;
    cin >> s;

    if (s == "n") {
        printIfValid(nullptr);
    } else {
        int val = stoi(s);
        printIfValid(&val);
    }

    return 0;
}
