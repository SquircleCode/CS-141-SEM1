/*
* Auto-Generated File
* Created Using cpp_file_manager
*/

// Importing Libraries
#include <iostream>

using namespace std;

// sorting function - important- rest follows easily
// bubble sort
int *arraySorter (int arrayRandom [],int n){
	for(int j = 1; j<n;j++){
		for (int i =0; i<n;i++){
			if (arrayRandom [i] >= arrayRandom [i+1] ){
					int temp = 	arrayRandom [i];
					arrayRandom [i] = arrayRandom [i+1] ;
					arrayRandom [i+1] = temp;			
			}
		}
	}
	return arrayRandom;
}


// max func
int arrayMax(int arrayRand[],int n){
	int *arraySorted = arraySorter(arrayRand,n);
	return *(arraySorted+n-1);
}
// min func
int arrayMin(int arrayRand[],int n){
	int *arraySorted = arraySorter(arrayRand,n);
	return *(arraySorted);
}
	
// mode func
int arrayMode(int arrayRand[],int n){
	int *arraySorted = arraySorter(arrayRand,n);
	int max;
	int freqPrev=1;
	int freqNext=1;
	for(int i =0 ; i<n;i++){
		if (*(arraySorted+i)==*(arraySorted+i+1)){
			freqNext++;
		}
		else{
			if(freqNext>freqPrev){
				max=*(arraySorted+i-1);
				freqPrev=freqNext;
				freqNext=1;
			}
		}
	}
	return max;
}


// median func
int arrayMedian(int arrayRand[],int n){
	int *arraySorted = arraySorter(arrayRand,n);
	if(n%2==1)
	return *(arraySorted+(n/2)+1);
	else
	return (*(arraySorted+(n/2))+*(arraySorted+(n/2)))/2;
}

//mean
int arrayMean (int arrayRand[], int n){
	//calculate the sum	
	int sum = 0;
	for (int i = 0;i<n;i++){
		sum +=arrayRand[i];	
	}
	return sum/n;
}

void arrayDisp(int *arrayRand, int n){
	for(int i =0;i<n;i++){
		cout << *(arrayRand+i)<<"\t";	
	}
	cout<<"\n";
}

// Main Function
int main(){
	// To-Do
	// variables for output
	int n,max,min,median,mode,mean;
	// array declaration
	int arrayRandom [] ={12,432,1,23,43,43,123};
	// number of elemets
	n = sizeof(arrayRandom)/sizeof(0);	
	arrayDisp(arrayRandom,n);
	
	// max
		max = arrayMax(arrayRandom,n);
	 
	// min 
		min = arrayMin(arrayRandom,n);
	// mean
	 	mean = arrayMean(arrayRandom,n);
	// median 
		median = arrayMedian(arrayRandom,n);
	// mode
		mode = arrayMode(arrayRandom,n);
	// output 
	
	arrayDisp(arraySorter(arrayRandom,n),n);
	cout << "\nMean\t=\t"<<mean<< "\nMedian\t=\t"<<median<<"\nMaximum\t=\t"<<max<<"\nMinimum\t=\t"<<min<<"\nMode\t=\t"<<mode<<endl;
	return 0;
}
