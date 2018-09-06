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
	for (int i=1; i<=10;i++){
		cout<<endl; // moves vertically
		// horizontal
		// stars before
		for (int j=1; j<=6-i || j<=i-5 ;j++){ // loop details refer table 1  	
			cout << "*";						
		}
		//gap
		for (int j=1; (j<=2*(i-1) && i<=5) || (j<=2*(10-i) && i>5) ;j++){ // loop details refer table 2 
			cout << " ";
		}
		//stars after
		for (int j=1; j<=6-i || j<=i-5 ;j++){ // loop details refer table 1 
			cout << "*";					
		}

	}
	cout<<endl;
	return 0;
}


/*
table 1
	constraints a>0, b>0

	value	con1	con2       TrueCondition
	i	a=6-i 	b=i-5
	1	 5	-4		a
	2	 4	-3		a
	3	 3	-2		a
	4	 2	-1		a
	5	 1	 0		a
	6	 0	 1		b
	7	-1	 2		b
	8	-2	 3		b
	9	-3	 4		b
	10	-4	 5		b

a is increasing and b is decreasing but because of the given condition they cannot be true simultaneously. so 'or' can be
used without any worries.
if we plot a graph of a and b as a function of i and impose the constraint, the region will not have any intersection.
	
table 2
	constraints j>0, 0 < i < 11 

	a1	j<=2*(i-1)  -> a1 and a2 are tautologies. They determine the number of times the loop 
	a2	j<=2*(10-i) -> will run when the other condition is satisfied. a1 is increasing and a2 is decreasing
			    -> but both are true, so if we draw a graph of the inequalities, both the regions will have an intersection  

	b1	i<=5	-> b1 and b2 determine whether the number should increase or decrease	  
	b2	i>5	-> they determine the direction. Essentially it is neccessary for the loop to know what condition it should use
	
	value	     con1	    	     con2
	i	a1    b1   a1 && b1	a2    b2   a1 && b1	
	1	0    t  	t     	18   f 		f
        2	2    t  	t	16   f 		f
	3	4    t  	t 	14   f		f
        4       6    t  	t 	12   f		f
	5	8    t  	t 	10   f		f
	6      10    f		f	 8   t		t
	7      12    f 		f 	 6   t		t
	8      14    f		f	 4   t		t
	9      16    f		f	 2   t          t
	10     18    f          f        0   t          t
	
*/





