#include <iostream>
using namespace std;

//Print 2d array
void printArrayRowWise(int arr[][4], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void printArrayColWise(int arr[][4], int row, int col){
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

int main(){

    //Create 2d Array
    int arrayOne[3][3];

    //initialize array
    int arrayTwo[3][4] = { //(NOTE : for initialize 2d array the the column initialization is mandatory)
    {1,2,3,0},
    {4,5,6,0},
    {7,8,9,0}
    };

    //int row=3;
    //int col=4;

    //printArrayRowWise(arrayTwo, row, col); // Function that print the array row wise
    //cout << endl;
    //printArrayColWise(arrayTwo, row, col); // Function that print the array col wise

    //Input in 2d array
    int arrayThree[3][3];
    int row=3;
    int col=3;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << "Enter the input for Row index : " << i << " Column index : " << j << endl;
            cin >> arrayThree[i][j];
        }
    }

    return 0;
}
