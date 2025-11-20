#include <iostream>
using namespace std;

int main() {
    int* p1 = NULL;
    int* p2 = nullptr;

    if (p1 == nullptr)
        cout << "is null" << endl;
    else
        cout << "not null" << endl;

    if (p2 == nullptr)
        cout << "is null" << endl;
    else
        cout << "not null" << endl;

    return 0;
}
