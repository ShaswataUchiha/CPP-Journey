#include <iostream>
#include <limits.h>
using namespace std;

void colWiseSum(int arr[][3], int row, int col){
    for(int i=0; i<col; i++){
        int sum=0;
        for(int j=0; j<row; j++){
            sum += arr[j][i];
        }
        cout << " Col wise sum : " << sum << endl;
    }
}

int main(){

    int arr[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
    };

    int row=3;
    int col=3;

    colWiseSum(arr, row, col);

    return 0;
}