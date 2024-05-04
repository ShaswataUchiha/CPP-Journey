#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;

void upperCase(char ch[]){

  int index = 0;
  
  while(ch[index] != '\0'){
    if(ch[index] >= 'a' && ch[index] <= 'z'){
      ch[index] = ch[index] - 'a' + 'A';
    }
    index++;
  }
}


int main(){
  
  char ch[100];
  cin >> ch;
  
  cout << "Before : " << ch << endl;
  upperCase(ch);
  cout << "After : " << ch << endl;

}