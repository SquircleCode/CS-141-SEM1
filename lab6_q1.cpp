/*
* Auto-Generated File
* Created Using cpp_file_manager
*/

// Importing Libraries
#include <iostream>

using namespace std;

// user input function using reference	
// i/p params - references 
// o/p params - unitCst, units, taxRt
// multiple outputs - use - reference, array or pointers
void inp(float& unitCst, int& units, float& taxRt){
	// body - user i/p - unitCst, units, taxRt
	cout << "\nEnter the Unit Cost : ";
	cin >> unitCst;
	cout << "\nEnter the Number of Units : ";	
	cin >> units;
	cout << "\nEnter the Tax Rate : ";
	cin >> taxRt;

}

// calc function using reference
// i/p params - unitCst, units and taxRt
// o/p params - salesTx, totDue
// multiple outputs - use - reference, array or pointers
void calc (float unitCst,int units, float taxRt, float& salesTx, float& totDue) {
	// body - calculates salesTx, totDue
	float cost = unitCst * units;
	salesTx = taxRt * cost / 100;
	totDue = cost + salesTx;
}

// output function
// i/p unitCst, units, taxRt, salesTx and totDue
// o/p params - nil
void outp(float unitCst,int units, float taxRt, float salesTx, float totDue){
	// Easily readable output
	cout << "\nUnit Cost = " << unitCst<< "\nUnits = " << units << "\nTax Rate = " << taxRt<< "\nsalesTx = " << salesTx << "\nTotalDue = " << totDue << endl <<endl;
}

// Main Method
int main(){
	// To-Do
	// variables - unitCost, unitsPurch, taxRate, salesTax and totalDue
	float unitCost, taxRate, salesTax, totalDue;
	int unitsPurch;	
	// call all the functions
	// input func
	inp(unitCost,unitsPurch,taxRate);
	// calc func
	calc(unitCost,unitsPurch,taxRate,salesTax,totalDue);
	// output func
	outp(unitCost,unitsPurch,taxRate,salesTax,totalDue);
	return 0;
}


