/*
* Auto-Generated File
* Created Using cpp_file_manager
*/

// Importing Libraries
#include <iostream>

using namespace std;

/*
 * Question 2 (Functions): You are ab salesperson of Bata shoe company, where each shoe is Rs 225. Company gave you three options for the salary.
1. Just a salary of Rs 600 per week;
2. A salary of Rs7.00 per hour plus a 10% commission on sales; (Assume you work 40 hours a week)
3. No salary, but 20% commissions and Rs20 for each pair of shoes sold
Write a program to help decide the best choice of compensation.
You ask the user for input (Write a function for this).
Then write other functions for each of the options.
Write a driver program to use the 4 functions and decide the best option for yourself.
(Of course, the weekly sales - the number of shoes sold per week has to be given by the user)
 */

// input function
int inputFunc(){
	//variables
	int weekly_sales;
	//question out
	cout << "Enter the weekly sales : ";
	//answer in
	cin >> weekly_sales;
	//return value - weekly sales ( number of shoes sold per week )
	return weekly_sales;	
	}
// fixed salary
float fixedSalary(){
	//just stays 600 no matter what
	return 600.0;	
	}

// salary + commission
float variableSalary(float sales){
	//input - sales
	// salary (sal) = 7 rs/hr
	float sal = 7;
	// working hrs (wh) = 40
	int wh = 40;
	// tot_sal = sal x wh
	float tot_sal = sal*wh;	
	// comm = 10%
	float comm = 0.1;
	// tot_comm = comm * sales
	float tot_comm = comm * sales;
	// money_earned = tot_sal + tot_comm
	float money_earned = tot_sal + tot_comm;
	//output - money_earned
	return money_earned;
 	}

// no salary, only commission
float noSalary (int weekly_sales , float sales){
	// input - weekly_sales, sales	
	// ValComm = 0.2 * sales
	float valComm = 0.2 * sales;
	// NumComm = 20 * weekly_sales
	float numComm = 20* weekly_sales; 
	// money_earned = valComm + numComm
	float money_earned = valComm + numComm;
	// output - money_earned
	return money_earned;
	}


// main function
int main(){
	// To-Do
	// Variables
	// weekly_sales, sales
	// fixedSal, varSal, noSal
	int weekly_sales;
	float sales, fixedSal, varSal, noSal;
	// store the function values in the variables, Calculate sales
	weekly_sales = inputFunc();
	sales = 225.0 * weekly_sales;
	fixedSal = fixedSalary();
	varSal = variableSalary(sales);
	noSal = noSalary(weekly_sales,sales);	
	// compare the values, find largest
	cout << "The salaries according the 3 schemes are\n1st Scheme (fixed salary) = " << fixedSal <<"\n2nd Scheme (Salary + Commission) = "<<varSal<<"\n3rd Scheme (Only Commission) = "<<noSal<<endl;
	// output - the largest one and the best case
	return 0;
}


