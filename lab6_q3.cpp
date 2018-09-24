/*
* Auto-Generated File
* Created Using cpp_file_manager
*/

// Importing Libraries
#include <iostream>

using namespace std;

// Max method by value
// i/p params - two numbers - a,b 
// o/p maxi
int max(int a, int b){
	// body find the greater number
	if (a>b)
		return a;
	else
		return b;
}
// Max method by reference
// i/p params - two numbers - a,b 
// - reference to Maximum
void max(int a, int b, int& maxi){
	// body - maxi = a ; if a>b , else maxi = b
	if (a>b)
		maxi = a;
	else 
		maxi = b;
}
// Main Method
int main(){
	// To-Do
	// Variables - two numbers and their Maximum 
	int a,b,maxi;
	//user input
	cout<<"Enter two numbers  : ";
	cin>>a>>b;
	// Call max function
	// by reference and by value
	max(a,b,maxi);	
	// output
	cout << "Maximum using value = "<<max(a,b)<<"\nMaximum using reference = "<<maxi;
	return 0;
}

