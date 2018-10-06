/*
* Auto-Generated File
* Created Using cpp_file_manager
*/

// Importing Libraries
#include <iostream>

using namespace std;

int gcd(int factor, int i, int a, int b){
/*
	pseudo code
	factor = 1
	if a%i == 0 and b%i==0 and i > factor
			factor = i
	else 
		i ++				 
*/
	
	if (i>=a||i>=b)
		return factor;
	if (a%i == 0 && b%i == 0 && i > factor)
		return gcd(i,i+1,a,b);
	else
		return gcd(factor,i+1,a,b);

		
}
	
// Main Function
int main(){
	// To-Do
	//variables
	int a,b;
	//input
	cout<<"gcd(a,b)\nEnter a followed by b : ";	
	cin >> a>>b;
	// function call, output
	cout << "gcd("<<a<<","<<b<<") = "<<gcd(1,1,a,b)<<endl;
	return 0;
}


