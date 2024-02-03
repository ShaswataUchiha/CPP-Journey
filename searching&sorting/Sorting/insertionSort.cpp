#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
using namespace std;

int insertionSort(vector<int> &arr){
  int n = arr.size();

  int i, j, key;
  for(i=1; i<n; i++){
    key = arr[i];
    j = i-1;

    while(j >= 0 && arr[j] > key){
      arr[j+1] = arr[j];
      j--;
    }
    arr[j+1] = key;
  }
}

int printArray(vector<int> arr){
  for(int i=0; i<arr.size(); i++){
    cout << arr[i] << " ";
  }
}

int main(){
  vector<int> arr = {44,11,33,22,55};

  insertionSort(arr);
  
  // Printing array
  printArray(arr);
  
}