#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

void reveseString(char ch[],int size){
  	int i=0;
  	int j=size-1;

  	while (i <= j){
    		swap(ch[i], ch[j]);
   		 i++;
    		j--;
  	}
  
}



int main(){
  
 	char ch[100];
  	cin >> ch;
 
  	cout << "Before : " << ch << endl;
  	int len = strlen(ch);
  	reveseString(ch, len);
  	cout << "After : " << ch << endl;

}