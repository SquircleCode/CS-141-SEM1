/*
* Auto-Generated File
* Created Using cpp_file_manager
*/

// Importing Libraries
#include <iostream>

using namespace std;

int Num(int end, int i, char con){
	//output
	if (con=='o')	
		cout << (2*i)+1<<endl;
	if (con=='e')
		cout << 2*i<<endl;
	//termination condition	
	if (i>=end){
		return 0;
	}
	// recursion statement
	return Num(end,i+1,con);	
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
	Num(indexFinder(end)-1,indexFinder(start),con);

	return 0;
}


