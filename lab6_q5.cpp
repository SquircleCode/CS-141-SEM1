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

// Sum method by value
// i/p params - two numbers - a,b
// o/p sum
int sum(int a, int b){
// body - sum = a+b
	return a+b;
}

// Main Method
int main(){
	// To-Do
	//variables
	int a,b,reslut, input;
	string choice ="";	
	//user input
	cout<<"Enter two numbers : ";
	cin >> a>>b;
	cout << "Choose : Maximum (1), Minimum (2), Sum (3)"<<endl;
	cin >> input;
	//condition
	if(input ==1){
		result=max(a,b);
		choice="maximum";
	}
	else if (input == 2){
		result=min(a,b);
		choice="minimum"
	}
	else if (input == 3){
		result=sum(a,b);
		choice="sum"
	}
	else{
		cout <<"enter 1, 2, 3 only";	

	}

	//output
	cout<<"The "<<choice<<"of the two numbers is "<<resutl
	return 0;
}


