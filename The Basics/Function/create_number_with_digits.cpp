#include <iostream>
using namespace std;

int combinationOfDigits(int number){
    int num=0;
    for(int i=0; i<number; ++i){
        cout << "Enter your digit : " << endl;
        int digit;
        cin >> digit;
        num = num*10+digit;
        cout << "Created number so far : " << num << endl;
    }
    return num;
}

int main() {
    
    int getNumber;
    cout << "Enter limit : ";
    cin >> getNumber;
    
    int printNumber = combinationOfDigits(getNumber);
    cout << "Combination of your number is : " << printNumber << endl;

    return 0;
}