#include <iostream>
#include <limits.h>
using namespace std;

int findMinimumInArray(int arr[], int size){
    int minAns = INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i] < minAns){
            minAns = arr[i];
        }
    }

    return minAns;
}

int main() {

    int arr[] = {20,4,7,30,9,1};
    int size = 6;

    int minimum = findMinimumInArray(arr, size);

    cout << "Minimum number in array is : " << minimum;

    return 0;
}

// USING MIN METHOD
// #include <iostream>
// #include <limits.h>
// #include <algorithm>
// using namespace std;

// int main() {

//     int arr[] = {20,4,7,30,9,1};

//     int bot = *min_element(arr, arr + sizeof(arr)/sizeof(arr[0]));
//     cout << "Minimum" << bot;

//     return 0;
// }