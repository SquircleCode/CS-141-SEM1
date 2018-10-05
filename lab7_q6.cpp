/*
* Auto-Generated File
* Created Using cpp_file_manager
*/

// Importing Libraries
#include <iostream>

using namespace std;

int reverse(int num, int revNum){
	//termination condition
	if (num<=0)
		return revNum;	
	//recursion statement	
	return reverse(num/10,(revNum*10)+(num%10));
	
}
// Main Method
int main(){
	// To-Do
	//variable
	int n ;	
	//input
	cout << "Enter a number : ";	
	cin>>n;
	// output, function call
	cout<<"The reverse is = "<<reverse (n,0)<<endl;
	return 0;
}


