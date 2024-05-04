#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

int findLengh(char ch[], int size){
	int index = 0;
	while(ch[index] != '\0'){
	index++;
}
	return index;
}


int main(){
  
  	char ch[100];
  	cin >> ch;

	int len = findLengh(ch, 100);
	
	cout << "Length of sring : " << len << endl;
   	cout << "Lenght print korchi : " << strlen(ch) << endl ;
  
   	char ch[100];
  	cin.getline(ch, 100);
   	cout << "Print : " << ch << endl;
}