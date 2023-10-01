#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;

int main(){
	string str;
	cin >> str;
	
	for (int i = 0; i < str.length(); i++){
		int counter = 1;
		
		while (str[i] == str[i + 1] && i < str.length() - 1){
			counter ++;
			i ++;
		}
		
		if (counter > 1){
			cout << str[i] << counter;
		}else{
			cout << str[i];
		} 
	}
}
