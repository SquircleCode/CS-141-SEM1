/*
* Auto-Generated File
* Created Using cpp_file_manager
*/

// Importing Libraries
#include <iostream>

using namespace std;

int arraySum (int num[], int n){
	//calculate the sum	
	int sum = 0;
	for (int i = 0;i<n;i++){
		sum +=num[i];	
	}
	return sum;
} 



// Main Function
int main(){
	// To-Do
	// array declaration
	int numbers [] ={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}; 	
	// output
	cout << arraySum(numbers,sizeof(numbers)/sizeof(0))<<endl;
	return 0;
}
