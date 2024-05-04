#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;

void replaceCharacter(char ch[]){
  int i=0;

  while(ch[i] != '\0'){
    if(ch[i] == '@'){
      ch[i] = ' ';
    }
    i++;
  }
}


int main(){
  
  char ch[100];
  cin.getline(ch, 100);
  
  cout << "Before : " << ch << endl;
  replaceCharacter(ch);
  cout << "After : " << ch << endl;

}