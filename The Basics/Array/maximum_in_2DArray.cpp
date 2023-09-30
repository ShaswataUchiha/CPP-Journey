#include <iostream>
#include <limits.h>
using namespace std;

int findMaximum(int arr[][3], int row, int col){
    int maximum = INT_MIN;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] > maximum)
                maximum = arr[i][j];
        }
    }
    return maximum;
}

int main(){

    int arr[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,70,9}
    };

    int row=3;
    int col=3;

    cout << "Maximum number in array is : " << findMaximum(arr, row, col);

    return 0;
}