#include <iostream>
using namespace std;

int main() {
  int arr[10];

  cout << "please enter 9 ints: ";
  for(int i = 0; i < 9; i++) {
    cin >> arr[i];
  }

  int num;
  cout << "another number: ";
  cin >> num;

  int insertIndex = 0;
  while (arr[insertIndex] < num && insertIndex < 9) {
    insertIndex++;
  }

  for(int j = 9-1; j >= insertIndex+1; j--) {
    arr[j] = arr[j-1];
  }

  arr[insertIndex] = num;

  cout << "final array: ";
  for(int i = 0; i < 10; i++) {
    cout << arr[i] << " ";
  }
  
  return 0;
}