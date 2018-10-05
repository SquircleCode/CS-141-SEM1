/*
* Auto-Generated File
* Created Using cpp_file_manager
*/

// Importing Libraries
#include <iostream>

using namespace std;
int natNum(int n,int i){
	//output
	cout << i<<endl;
	//test cond.
	if (n==1){
		return 0;	
	}
	//recursion stmt
	return natNum(n-1,i+1);
}

// Main Method
int main(){
	// To-Do
	//variables
	int n;
	//input
	cout << "Prints 'n' natural numbers.\nEnter n : ";
	cin >> n;
	//function call
	natNum(n,1);
	return 0;
}


