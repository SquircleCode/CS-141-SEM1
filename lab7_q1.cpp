/*
* Auto-Generated File
* Created Using cpp_file_manager
*/

// Importing Libraries
#include <iostream>

using namespace std;

int power(int x, int n){
	// terminating condition	
	if (n==0)
		return 1;
	// Recursion statement	
	// multiplies number n times
	return x*power(x,n-1);
}

// Main Method
int main(){
	// To-Do
	// varialbles	
	int x,n;
	// input
	cout << "Finds x^n \nEnter x followed by n : ";
	cin>>x>>n;
	//function call
	cout <<x<<"^"<<n<<" = "<<power(x,n)<<endl;
	return 0;
}


