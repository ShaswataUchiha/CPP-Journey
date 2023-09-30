#include <iostream>
using namespace std;

void shiftAllMinusOneSide(int arr[], int size) {
  int j = 0; // Here j represent whwre negetive value stores
  
  for(int i=0; i<size; i++){
    if(arr[i] < 0){
      swap(arr[i], arr[j]);
      j++;
    }
   }
  
}

int main() {

  int arr[] = {30, 4, -5, -6, 60, 7, -2, 40};
  int size = 8;

  shiftAllMinusOneSide(arr, size);

  // Printing the array
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}
