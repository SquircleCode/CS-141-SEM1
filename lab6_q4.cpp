/*
* Auto-Generated File
* Created Using cpp_file_manager
*/

// Importing Libraries
#include <iostream>

using namespace std;

// Min method by value
// i/p params - two numbers - a,b 
// o/p mini
int min(int a, int b){
	// body find the greater number
	if (a<b)
		return a;
	else
		return b;
}
// Min method by reference
// i/p params - two numbers - a,b 
// - reference to Minimum
void min(int a, int b, int& mini){
	// body - mini = a ; if a>b , else mini = b
	if (a<b)
		mini = a;
	else 
		mini = b;
}
// Main Method
int main(){
	// To-Do
	// Variables - two numbers and their Minimum 
	int a,b,mini;
	//user input
	cout<<"Enter two numbers  : ";
	cin>>a>>b;
	// Call min function
	// by reference and by value
	min(a,b,mini);	
	// output
	cout << "Minimum using value = "<<min(a,b)<<"\nMinimum using reference = "<<mini;
	return 0;
}
