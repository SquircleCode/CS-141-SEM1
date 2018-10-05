/*
* Auto-Generated File
* Created Using cpp_file_manager
*
Question 3 (Loops and Logic): The integer 36 has a peculiar property: it is a perfect square, and is also the sum of the integers from 1 through 8. The next such number is 1225 which is 352, and the sum of the integers from 1 through 49. Find the next number (or numbers) that is a perfect square and also the sum of a series 1...n. This next number may be greater than 32767 (range of int, so use long). You may use library functions that you know of, (or mathematical formulas) to make your program run faster. (Note: depending on your machine and your program, it can take quite a while to find this number.)
*/
// Importing Libraries
#include <iostream>
#include <math.h>

using namespace std;

// sums upto n integers
long sumUptoN(int n){
	long sum = 0;
	for (int i = 1 ;i<=n;i++){
		sum +=i;
	}
	return sum;
}
// checks if a number x is a perfect square
bool perfectSquareCheck(long x){
	// finds the square root of x
	double sqroot = pow(x,0.5);
	// see's if the integral part of the number is equal to the actual number 
	if (sqroot - (long)sqroot ==0 ){
		return true;	
	}
	else
		return false;			
}

// Main Function
int main(){
	// To-Do
	bool b = false;
	long result;
	for (int i =1; b==false;i++ ){
		result = sumUptoN(i);
		b = perfectSquareCheck(result);
        int l = 0;
		if(b){
			cout<< "The number is = " << result;
            l++;
            if (l<=4)
            b=false;
		}
		
	}
	return 0;;
}
}


