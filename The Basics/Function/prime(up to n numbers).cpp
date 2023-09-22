#include <iostream>
using namespace std;

bool checkNumber(int a){
    int i=2;
    for(i=2; i<a; i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}

int main(){

    int num;
    cout << "Enter your number : ";
    cin >> num;

    for(int i=2; i<=num; i++){
        bool number = checkNumber(i);
        if(number){
            cout << i << endl;
        }
    }

    return 0;
}