// Prime or Non-prime

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

    bool number = checkNumber(num);

    if(number){
        cout << "Prime number";
    }
    else{
        cout << "Not a prime number";
    }

    return 0;
}
