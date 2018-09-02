/*
* Auto-Generated File
* Author 
	Name	: SAI KRISHNA I
	Roll No : 1811131
*/

// Importing Libraries
#include <iostream>

using namespace std;

// Main Method
int main(){
	// To-Do
	// Input Three numbers
	int a,b,c,g;
	
	cout << "Enter three numbers : ";
	cin >> a >> b >> c;
	
	//find greatest number 
	if(a>b && a>c )
		g=a;

	else if(b>c)
		g=b;

	else
		g=c;
	
	//prints the number
	cout << "The greatest number is " << g << endl;
	return 0;
}


