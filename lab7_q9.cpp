/*
* Auto-Generated File
* Created Using cpp_file_manager
*/

// Importing Libraries
#include <iostream>

using namespace std;
int factorial(int n){
	// termination condition	
	if(n==0)
		return 1;
	// recursion statement
	return n*factorial(n-1);
}

// Main Method
int main(){
	// To-Do
	//variables
	int n;
	// input
	cout << "Enter a number : ";
	cin >> n;
	// function call, output
	cout << n<<"! = "<<factorial(n)<<endl;
	return 0;
}


