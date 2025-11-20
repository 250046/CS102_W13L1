#include <iostream>
using namespace std;

int countValid(int* arr[], int size){
  int count = 0;
  int **p = arr;
  for(int i = 0; i < size; ++i){
    if(*p != nullptr) ++count;
    ++p;
}
  return count;
}

int main(){
  int size;
  cin >> size;
  int *arr[size];
  for(int i=0;i<size;i++){
    int v; cin >> v;
    if(v == -1) arr[i] = nullptr;
    else {
      arr[i] = new int(v);
    }
}
  cout << countValid(arr,size);
  for(int i=0;i<size;i++) if(arr[i]) delete arr[i];
  return 0;
}
