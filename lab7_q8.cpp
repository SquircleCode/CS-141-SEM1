/*
* Auto-Generated File
* Created Using cpp_file_manager
*/

// Importing Libraries
#include <iostream>

using namespace std;
int sumDigit(int num){
	//termination condition
	if(num<=0){
		return 0;	
	}
	//recursion statement
	return num%10 + sumDigit(num/10);
}

// Main Method
int main(){
	// To-Do
	//variables
	int num;
	//input
	cout << "Enter a number : " ;
	cin >> num;
	//output & function call
	cout << "The sum of the digits is = "<<sumDigit(num)<<endl;
	return 0;
}


