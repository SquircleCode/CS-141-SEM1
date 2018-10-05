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
	//variables
	int n ;	
	// input
	cout << "Enter a number : ";	
	cin>>n;
	//function call
	int rev = reverse(n,0);
	//palindrom check	
	if (n==rev)
		cout << "It is a palindrom"<<endl;	
	else
		cout << "It is not a palindrom"<<endl;
	return 0;
}


