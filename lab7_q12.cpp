/*
* Auto-Generated File
* Created Using cpp_file_manager
*/

// Importing Libraries
#include <iostream>

using namespace std;

int lcm(int i, int a, int b){
/*
	pseudo code
	a<b
	i=b
	if i%a == 0 and i%b==0 
			output => i
			end
	else 
		i ++			 
*/
	
	if(i%a == 0 && i%b==0)
		return i;
	else
		return lcm(i+1,a,b);

		
}
	
// Main Function
int main(){
	// To-Do
	//variables
	int a,b,i;
	//input
	cout<<"lcm(a,b)\nEnter a followed by b : ";	
	cin >> a>>b;
	// function call, output
	if (a>b)
		i=a;
	else
		i=b;
	cout << "lcm("<<a<<","<<b<<") = "<<lcm(i,a,b)<<endl;
	return 0;
}


