/*
* Auto-Generated File
* Created Using cpp_file_manager


Sum of even and odd
Write a function that outputs the sum of all even numbers between firstNum and secondNum. (use loop); create a user-defined function called sumEvenNumbers(). Use call-by-value
Write a function that outputs the sum of all odd numbers between firstNum and secondNum. (use loop); create a user-defined function called sumOddNumbers(). Use call-by-value
Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareOddNumbers(). Use Call-by-Value. 
Write a function that outputs the sum of the square of the odd numbers between firstNum and secondNum. (use while loop); create a user-defined function called sumSquareEvenNumbers(). Use Call-by-Value. 
Write a main program. 
Declare a variable called sumEven in the main() for the sumEvenNumbers(). sumEvenNumbers() is a value returning function. Use sumEven to hold a returned value.
Declare a variable called sumOdd in the main() for the sumOddNumbers(). sumOddNumbers() is a value returning function. Use sumOdd to hold a returned value.
Declare a variable called sumSquareEven in the main(), for the sumSqureEvenNumbers(). sumSqureEvenNumbers() is a value returning function. Use sumSquareEven to hold a returned value.
Declare a variable called sumSquareOdd in the main(), for the sumSqureOddNumbers(). sumSqureOddNumbers() is a value returning function. Use sumSquareOdd to hold a returned value.
Then display the values



*/

// Importing Libraries
#include <iostream>

using namespace std;


// sum of Even Numbers
// i/p - two numbers - start and end points
// o/p - sum
int sumEvenNumbers(int firstNum, int secondNum){
	int sum = 0;
	for (int i = firstNum+1; i<secondNum;i++){
		if (i%2==0)
			sum+=i;
	}
	return sum;
}

// sum of Odd Numbers
// i/p - two numbers - start and end points
// o/p - sum
int sumOddNumbers(int firstNum, int secondNum){
	int sum = 0;
	for (int i = firstNum+1; i<secondNum;i++){
		if (i%2==1)
			sum+=i;
	}
	return sum;
}

// sum of Squares of Odd Numbers
// i/p - two numbers - start and end points
// o/p - sum
int sumSquareOddNumbers(int firstNum, int secondNum){
	int sum = 0;
	for (int i = firstNum+1; i<secondNum;i++){
		if (i%2==1)
			sum+=(i*i);
	}
	return sum;
}


// sum of Squares of Even Numbers
// i/p - two numbers - start and end points
// o/p - sum
int sumSquareEvenNumbers(int firstNum, int secondNum){
	int sum = 0;
	for (int i = firstNum+1; i<secondNum;i++){
		if (i%2==0)
			sum+=(i*i);
	}
	return sum;
}


// Main Method
int main(){
	// To-Do
	//Variable declaration
	int sumEven,sumOdd,sumSquareEven,sumSquareOdd,start,end;
	//user input
	cout << "Enter two numbers (smaller one first) : ";
	cin >> start >> end;
	// storing the returned value from functions	
	sumEven = sumEvenNumbers(start,end);
	sumOdd = sumOddNumbers(start,end);
	sumSquareEven = sumSquareEvenNumbers(start,end);
	sumSquareOdd = sumSquareOddNumbers(start,end);
	//output
	cout <<"\nthe sum of all even numbers between the given numbers = "<< sumEven<<"\nthe sum of all odd numbers between the given numbers = "<< sumOdd<<"\nthe sum of the square of the even numbers between the given numbers = "<<sumSquareEven <<"\nthe sum of the square of the odd numbers between the given numbers = "<< sumSquareOdd<<endl;

	return 0;
}


