/*
* Auto-Generated File
* Created Using cpp_file_manager
*/

// Importing Libraries
#include <iostream>

using namespace std;
int sumNum(int end , int sum){
	//termination condition
	if (end <=0){
		return 0;	
	}
	//recursion statement
	return sum + sumNum(end-1,sum+1);
}

// Main Method
int main(){
	// To-Do
	//variables
	int n;
	//input
	cout << "Sum upto 'n' numbers\nEnter n : ";
	cin>>n;
	//function call
	cout<<sumNum(n,1)<<endl;
	return 0;
}


