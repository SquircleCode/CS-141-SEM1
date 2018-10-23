/*
* Auto-Generated File
* Created Using cpp_file_manager
*/

// Importing Libraries
#include <iostream>

using namespace std;

// sorting function - important- rest follows easily
// bubble sort - ascending
void arraySorter (int arrayRandom [],int n){
	for(int j = n-1; j>0;j--){ // number of time row wise swapping happens
		for (int i =0;i<j;i++){ // swaps elements
			if (arrayRandom [i] >arrayRandom [i+1] ){
					int temp = 	arrayRandom [i];
					arrayRandom [i] = arrayRandom [i+1] ;
					arrayRandom [i+1] = temp;			
			}
		}
	}
}


int kthLarge (int arraySorted [], int n, int k){
	int i =1; //distinct value counter
	int j= n-1; // position counter
	int preValue = *(arraySorted+n-1);
	int curValue;
	while(i<k){
		curValue = *(arraySorted+j-1);
		if (curValue != preValue){ // increases counter whenever the consecutive values are distinct
			preValue = curValue ;// stores the smaller one
			i++;
		}
		j--;
	}
	return preValue;
}

int kthSmall(int arraySorted [], int n, int k){
	int i =1; //distinct value counter
	int j=0; // position counter
	int preValue = *(arraySorted);
	int curValue;
	while(i<k){
		curValue = *(arraySorted+j);
		if (curValue != preValue){ // increases counter whenever the consecutive values are distinct
			preValue = curValue ;// stores the larger one
			i++;
		}
		j++;
	}
	return preValue;

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
	// variables
	int arrayRand []={8,9,10,10,1,1,3,2,5,4,6,7,3,7,8,2};
	int n = sizeof(arrayRand)/sizeof(1);
	int k;
	// displays predefined array
	cout <<"\nRandom Array\n";
	arrayDisp(arrayRand,n);
	// user input for k
	cout << "\nDisplays kth Largest and Smallest.\nEnter the value of k : ";
	cin >> k;
	// sorts the array 
	arraySorter(arrayRand,n);
	// displays sorted array
	cout << "\nSorted Array\n";
	arrayDisp(arrayRand,n);
	// finds kth largest and smallest
	int kthL = kthLarge(arrayRand,n,k);
	int kthS = kthSmall(arrayRand,n,k);
	// final output
	if (k==1){
	cout << "\n"<<k<<"st Largest =\t" <<kthL<<endl;
	cout << "\n"<<k<<"st Smallest =\t" <<kthS << endl;
	}
	else if (k==2){
	cout << "\n"<<k<<"nd Largest =\t" <<kthL<<endl;
	cout << "\n"<<k<<"nd Smallest =\t" <<kthS << endl;
	}
	else if (k==3){
	cout << "\n"<<k<<"rd Largest =\t" <<kthL<<endl;
	cout << "\n"<<k<<"rd Smallest =\t" <<kthS << endl;	
	}
	else {
	cout << "\n"<<k<<"th Largest =\t" <<kthL<<endl;
	cout << "\n"<<k<<"th Smallest =\t" <<kthS << endl;
	}
	return 0;
}


