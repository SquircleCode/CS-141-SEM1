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
void arrayDisp(int *arrayRand, int n){
	for(int i =0;i<n;i++){
		cout << *(arrayRand+i)<<"\t";	
	}
	cout<<"\n";
}


// Main Function
int main(){
	// To-Do
	// array declaration
	int numbers [] ={1,2,3,4,5,6,7,8,9,10}; 
	// calculates number of elements
	int n = sizeof(numbers)/sizeof(0);
	// displays the array;
	cout << "\nThe Array\n";
	arrayDisp(numbers,n);	
	// output
	cout <<"Sum of elements = "<< arraySum(numbers,n)<<endl;
	return 0;
}
