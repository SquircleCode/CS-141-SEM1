/*
* Auto-Generated File
* Created Using cpp_file_manager
*/

// Importing Libraries
#include <iostream>

using namespace std;
//merges the arrays	
void arrayMerger(int arrayRand1 [],int n1,int arrayRand2 [] , int n2,int arrayMerged[]){
	for(int i =0; i<n1+n2;i++){
		if (i<n1){
			arrayMerged[i] = arrayRand1[i];
		}	
		else{
			arrayMerged[i] = arrayRand2[i-n1];
		}
	}
}

// max func
int arrayMax(int arraySorted[],int n){
	return *(arraySorted+n-1);
}
// min func
int arrayMin(int arraySorted[],int n){
	return *(arraySorted);
}

// sorting function - important- rest follows easily
// bubble sort
int *arraySorter (int arrayRandom [],int n){
	for(int j = n-1; j>0;j--){ // number of time row wise swapping happens
		for (int i =0;i<j;i++){ // swaps elements
			if (arrayRandom [i] >arrayRandom [i+1] ){
					int temp = 	arrayRandom [i];
					arrayRandom [i] = arrayRandom [i+1] ;
					arrayRandom [i+1] = temp;			
			}
		}
	}
	return arrayRandom;
}

//Displays the elements of the array
void arrayDisp(int *arrayRand, int n){
	for(int i =0;i<n;i++){
		cout << *(arrayRand+i)<<"\t";	
	}
	cout<<"\n";
}

// Main Function
int main(){
	// To-Do
	//array 1
	int arrayRand1 [] ={12,432,1,23,43,43,123,45,56,56,1,2};
	int n1 = sizeof(arrayRand1)/sizeof(1);
	//display array 1
	cout << "\nArray 1\n";
	arrayDisp(arrayRand1,n1);
	//array 2	
	int arrayRand2 []={8,9,10,10,1,1,3,2,5,4,6,7,3,7,8,2};
	int n2 = sizeof(arrayRand2)/sizeof(1);
	//display array 1
	cout << "\nArray 2\n";
	arrayDisp(arrayRand2,n2);	
	// creates empty array;
	int arrayMerged [n1+n2];
	// merges the array
	arrayMerger(arrayRand1, n1, arrayRand2, n2, arrayMerged);
	// displays merged array		
	cout << "\nArray Merged\n";
	arrayDisp(arrayMerged,n1+n2);
	// sorts the array
	arraySorter(arrayMerged,n1+n2);	
	// displays sorted array	
	cout << "\nArray Sorted\n";
	arrayDisp(arrayMerged,n1+n2);
	// calculates max, min	
	int max = arrayMax(arrayMerged,n1+n2);
	int min = arrayMin(arrayMerged,n1+n2);
	// output
	cout <<"\nMaximum =\t"<<max<<"\nMinimum =\t"<<min<<endl;	
	return 0;
}


