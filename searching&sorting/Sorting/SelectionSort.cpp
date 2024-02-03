#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
using namespace std;

int selectionSort(vector<int> &arr){
  int n = arr.size();
  
  for(int i=0; i<n-1; i++){
      int minIndex = i;
      for(int j=i+1; j<n; j++){
          if(arr[j] < arr[minIndex])
                minIndex = j;
      }
      swap(arr[i], arr[minIndex]);
  }
}

int printArray(vector<int> arr){
  for(int i=0; i<arr.size(); i++){
    cout << arr[i] << " ";
  }
}

int main(){
//   vector<int> arr = {44,11,33,22,55};
    vector<int> arr = {101,4,7,89,46,67,8,1};

  selectionSort(arr);

  // Printing array
  printArray(arr);
  
}