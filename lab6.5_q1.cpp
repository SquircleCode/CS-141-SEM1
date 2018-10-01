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
	// variables - apple, mango, banana - number and cost
	float cA,cM,cB,nA,nM,nB;
	cA=1;
	cB=0.5;
	cM=3;
	// Condition - 100 fruits, 100 rupees. number >0 and cost > 0. number is a integer
	// (nA x cA) + (nB x cB) + (nM x cM) = 100 
	// nA + nB + nM = 100
		// => nA  = 100 - (nB + nM)
		// ((100 - (nB + nM)) x cA) + (nB x cB) + (nM x cM) = 100 
		// 100cA - (nB x cA) - (nM x cA) + (nB x cB) + (nM x cM) = 100 
		// nB(cB - cA) = 100(1-cA) + nM(cA-cM)
	// nB = [100(1-cA)+ nM(cA-cM)]/(cB-cA)
	// nA = 100 - {([100(1-cA)+ nM(cA-cM)]/(cB-cA)) + nM} 
	// 0 <= nM <= 100, nA and nB are integers
	// do-while loop- as it has to be exit controlled - nM is independent
	
	for (nM=0;nM <= 100 && nA <= 100 && nB <= 100 && nA>=0 && nB>=0 ; nM++ ){
	// calculate nB and nA 	
		nB = (100*(1-cA)+ nM*(cA-cM))/(cB-cA);	
		nA = 100 - (((100*(1-cA)+ nM*(cA-cM))/(cB-cA)) + nM);
		// print nB and nA  when they are integers
		if ((nA - (int)nA) == 0 && (nB - (int)nB) == 0 && nA <= 100 && nB <= 100 && nA>=0 && nB>=0){
			cout << "Mangoes = " << nM<<"\tApples = " << nA << "\tBananas = " << nB << endl; 
		}
					
	}


	return 0;
}


