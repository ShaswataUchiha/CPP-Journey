#include <iostream>

using namespace std;

int bubleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {5,6,0,4,2};
    int size = sizeof(arr)/sizeof(arr[0]);

    // Buble Sort...
    bubleSort(arr, size);

    // Printing Arry
    printArray(arr, size);

    return 0;
}
