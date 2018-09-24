/*
* Auto-Generated File
* Created Using cpp_file_manager


UpperCase and LowerCase
Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.
Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value.
Write a main program, that calls the above function based on the input of the user. If the user enters a lower case character, it should automatically detect it and call toUpper() and display the upper case value and vice-versa. 


*/

// Importing Libraries
#include <iostream>

using namespace std;

// char to upper case from lower case
char toUpper(char inp){
	return (inp-32);
}

//char to lower case from upper case
char toLower(char inp){
	return (inp+32);
}

// Main Method
int main(){
	// To-Do
	//variables
	char inp;
	char out;
	//user input
	cout << "Enter a character : ";
	cin >> inp;
	//check
	if (inp >= 65 && inp <=90){ // input is in upper case
		//function call
		out = toLower(inp);
		cout << "The inverted case is : "<<out<<endl;
	}
	else if (inp >= 97 && inp <=122){ // input is in lower case
		//function call
		out = toUpper(inp);
		cout << "The inverted case is : "<<out<<endl;
	}
	else
		cout<<"Enter english alphabets only";
	//output
	
	return 0;
}


