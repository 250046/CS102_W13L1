#include <iostream>
using namespace std;

void swapRef(int& a, int& b){

  int temp = a;

  a = b;

  b = temp;
}

int main(){

  int a, b;

  cin >> a >> b;

  swapRef(a,b);

  cout << a << ’ ’ << b;

  return 0;
}
