/*
* Auto-Generated File
* Created Using cpp_file_manager
*/

// Importing Libraries
#include <iostream>

using namespace std;

// Main Function
int main(){
	char str[20], *p;

	cout << "Input about 10 characters of string\n";
	cin >> str;

	// Pointer variable refers to address of string
	p = str;

	// Show string by shifting top character of string to right
	for(int n =19;n>=0;n--){
		for(int i = n ; i<20 && str[i]!='\0';i++){
			cout<<*(str+i);
		}	
		cout<<endl;
	}

	return (0);
}


