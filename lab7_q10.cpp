/*
* Auto-Generated File
* Created Using cpp_file_manager
*/

// Importing Libraries
#include <iostream>

using namespace std;

int fibanacci(int end , int i, int prev){
	cout << i+prev<<endl;
	if (end ==0){
		return 0;	
	}
	return i + fibanacci (end-1, i+prev,i);

}

// Main Method
int main(){
	// To-Do
	int n;
	cout << "Enter the number of terms : ";
	cin >> n;
	cout <<"1\n1\n";
	fibanacci(n-2,1,1);
	return 0;
}


