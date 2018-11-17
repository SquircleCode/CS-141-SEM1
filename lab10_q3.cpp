/*
* Auto-Generated File
* Created Using cpp_file_manager
*/

// Importing Libraries
#include <iostream>

using namespace std;

//class def
class rect{
	// private data members
	private:	
	int length;
	int breadth;
	// public functions
	public:
	// constructor
	rect(int l, int b){
		length = l;
		breadth = b;
	}
	// default constructor
	rect(){
		length = 0;
		breadth = 0;
	}

	int area(){
		return length * breadth; 		
	}
	int perimeter();
	void setVal(int , int);
};

int rect :: perimeter(){
	return 2*(length + breadth);
}
void rect :: setVal (int l, int  b){
	length = l;
	breadth = b;
}

// Main Method
int main(){
	// To-Do
	// variables
	int l1,l2,b1,b2;
	// user input
	cout << "Rectangle1 :\nlength = ";
	cin >> l1;
	cout << "breadth = ";
	cin >> b1;
	cout << "\nRectangle2 :\nlength = ";
	cin >> l2;
	cout << "breadth = ";
	cin >> b2;	
	// create object
	rect r1 (l1,b1);
	rect r2 (l2,b2);	
	// cacl area, perimeter
	cout << "\nAREA & PERIMETER\nRectangle1 :\nPerimeter = "<<r1.perimeter()<<"\nArea = "<<r1.area()<<"\n\nRectangle2 :\nPerimeter = "<<r2.perimeter()<<"\nArea = "<<r2.area()<<endl<<endl;
	return 0;
}


