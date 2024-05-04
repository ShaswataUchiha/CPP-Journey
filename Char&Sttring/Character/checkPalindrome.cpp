#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;

bool isPalindrome(char ch[], int n){
  int i=0;
  int j=n-1;

  while(i <= j){
    if(ch[i] == ch[j]){
      i++;
      j--;
    }
    else{
      return false;
    }
  }
  return true;
}


int main(){
  
  char ch[100];
  cin >> ch;
  int length = strlen(ch);
  
  bool check = isPalindrome(ch, length);

  if(check){
    cout << "Palindrome" << endl;
  }
  else{
    cout << "Not a Palindrome" << endl;
  }
  

}