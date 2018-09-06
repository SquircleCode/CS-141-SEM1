/*
* Auto-Generated File
* Created Using cpp_file_manager
*/

// Importing Libraries
#include <iostream>

using namespace std;

// Main Method
int main(){
	// To-Do
	
	for (int i=1; i<10;i++){
		cout<<endl; // moves vertically
		// horizontal
		// gaps before
		for (int j=1; j<=5-i || j<=i-5 ;j++){ // 4 to 0 and 0 to 4
			cout << " ";						
		}
		//stars
		for (int j=1; (j<=(2*i)-1 && i<=5) || (j<=(2*(10-i))-1 && i>5) ;j++){ // 1,3,5,7,9 and reverse
			cout << "*";
		}

	}
	cout<<endl;




	return 0;
}


