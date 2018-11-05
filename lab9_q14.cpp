/*
* Auto-Generated File
* Created Using cpp_file_manager
*/

// Importing Libraries
#include <iostream>

using namespace std;

// Main Function
int main(){
	// To-Do
	char name [] ="SaiKrishna";
	for(int i =0; i<sizeof(name)/sizeof(name[0]);i++){
		cout<<name[i]<<"\t";	
	}
	cout << endl;
	for(int i =0; i<sizeof(name)/sizeof(name[0]);i++){
		cout<<*(name+i)<<"\t";	
	}
		
	
	return 0;
}


