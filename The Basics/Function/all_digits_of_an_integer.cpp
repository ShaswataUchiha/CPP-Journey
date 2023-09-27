#include <iostream>
using namespace std;

int printAllDigits(int number){
    int rem;
    while(number > 0){
        rem=number%10;
        cout << "Digit : " << rem << endl;
        number = number/10;
    }
}

int main() {

    int number;
    cout << "Enter your number : ";
    cin >> number;

    printAllDigits(number);

    return 0;
}