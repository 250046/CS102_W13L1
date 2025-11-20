#include <iostream>
using namespace std;

void setToHundred(int** p){
    **p = 100;
}

int main() {

  int x;

  cin >> x;

  int *p = &x;
  setToHundred(&p);
  cout << x;
  return 0;
}
