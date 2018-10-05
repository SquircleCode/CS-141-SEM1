/*
* Auto-Generated File
* Created Using cpp_file_manager
*/

// Importing Libraries
#include <iostream>

using namespace std;

int Num(int end, int i, char con){
	//odd or even check
	int n;	
	if (con=='o')	
		n=((2*i)+1);
	if (con=='e')
		n =(2*i);
	//termination condition	
	if (i>=end){
		return 0;
	}
	// recursion statement
	return n+Num(end,i+1,con);
			
}

int indexFinder(int x){
	// writes a number as the nth odd or even number
	if(x%2==0)
		return x/2;
	else 
		return(x+1)/2;
}

// Main Method
int main(){
	// To-Do
	//variables
	int start, end;
	char con;
	//input
	cout << "Enter e for even and o for odd : ";
	cin >> con;
	cout << "Enter the range (from a to b), enter a followed by b : ";
	cin >> start>>end;
	// function call
	//output
	cout<< Num(indexFinder(end),indexFinder(start),con);

	return 0;
}


