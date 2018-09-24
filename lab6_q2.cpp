/*
* Auto-Generated File
* Created Using cpp_file_manager
*/

// Importing Libraries
#include <iostream>

using namespace std;

// Sum method by value
// i/p params - two numbers - a,b
// o/p sum
int sum(int a, int b){
// body - sum = a+b
	return a+b;
}
// Sum method by reference
// i/p params - two numbers - a,b 
// - reference to sum
void sum(int a, int b, int& sum){
	// body - sum = a+b
	sum = a+b;
}



// Main Method
int main(){
	// To-Do
	// Variables - two numbers and their sum
	int a,b,sum1; 
	// Call sum function by reference and by value
	sum(a,b,sum1);
	// output
	cout << "Sum using value = "<<sum(a,b)<<"\nSum using reference = "<<sum1;

	return 0;
}


