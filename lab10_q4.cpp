
#include <iostream>
using namespace std;

// ********************************************************************
//  Declaration of class Point
// ********************************************************************

// class Point represents a two-dimensional point
class Point{
	public:
	// default class constructor (with no arguments):
	Point(); 

	// class constructor that sets the coordinates x, y to the values xval,
	// yval:
	Point(int xval, int yval);

	// member function for moving a point by dx, dy:
	void Move(int dx, int dy);

	// member functions for getting values of x, y:
	int Get_X() const;
	int Get_Y() const;

	// member functions for setting x, y to xval, yval respectively  
	void Set_X(int xval);
	void Set_Y(int yval);

	//Lab 10 exercise 4.1. Add declaration of member function Print here:
	void Print();

	// private data members x, y represent coordinates of the point:
	private:
	int X;
	int Y;
};  


// ********************************************************************
//  Methods for class Point
// ********************************************************************

// class constructor sets X, Y to zero when no values are specified:
Point::Point(){
	X = 0;
	Y = 0;
}

// class constructor sets X, Y to given values xval, yval:
Point::Point(int xval, int yval){
	X = xval;
	Y = yval;
}

// member function Move: increases the x coordinate by dx and the y
// coordinate by dy.
void Point::Move(int dx, int dy){
	X += dx;
	Y += dy;
}

// Get_X returns the value of the X coordinate
int Point::Get_X() const{
	return X;
}

// Get_Y returns the value of the Y coordinate
int Point::Get_Y() const{
	return Y;
}

// Set_X sets the value of X coordinate to xval
void Point::Set_X(int xval){
	X = xval;
} 

// Set_Y sets the value of Y coordinate to yval
void Point::Set_Y(int yval){
	Y = yval;
} 
    

//Lab 10 exercise 4.1. Add definition of member function print:
void Point::Print(){
	cout<<"("<<X<<", "<<Y<<")\n";
}


// ********************************************************************
//  Declaration of class Rectangle
// ********************************************************************

//Lab 10 exercise 4.2, 4.3: Add class Rectangle declaration HERE: 
class Rectangle{
	private:
	Point bl,br,tl,tr;
	int side1();
	int side2();
	public:	
	Rectangle();
	Rectangle(Point,Point);
	void Print();
	int area();
};

// ********************************************************************
//  Methods for class Rectangle
// ********************************************************************

//Lab 10 exercise 4.2, 4.3. Add class Rectangle methods HERE: 
Rectangle::Rectangle(Point bl, Point tr){
	this->bl=bl;
	this->tr=tr;
	tl.Set_X(bl.Get_X());
	tl.Set_Y(tr.Get_Y());
	br.Set_X(tr.Get_X());
	br.Set_Y(bl.Get_Y());
}

Rectangle::Rectangle(){
	bl.Set_X(0);bl.Set_Y(0);
	br.Set_X(1);br.Set_Y(0);			
	tr.Set_X(1);tr.Set_Y(1);
	tl.Set_X(0);tl.Set_Y(1);
}
void Rectangle::Print(){
	cout<<"Bottom left = ";
	bl.Print();
	cout<<"Bottom Right = ";
	br.Print();
	cout<<"Top Right = ";
	tr.Print();
	cout<<"Top Left = ";
	tl.Print();
	cout<<endl;

}
int Rectangle :: side1(){
	return br.Get_X()-bl.Get_X();
}
int Rectangle :: side2(){
	return tl.Get_Y()-bl.Get_Y();
}

int Rectangle :: area(){
	int s1 = side1();
	int s2 = side2();
	return s1*s2;
}

// ********************************************************************
//  main() function for testing classes Point and Rectangle
// ********************************************************************

// Testing classes Point and Rectangle
int main(){
	int x1,x2,y1,y2;
	// Declaring a point using default class constructor (x = y = 0):
	Point p1;
	cout<< "The x value for p1 is " << p1.Get_X() << endl;
	cout<< "The y value for p1 is " << p1.Get_Y() << endl;

	// Declaring a point with coordinates X = 2, Y = 3:
	Point p2(2, 3);
	cout<< "The x value for p2 is " << p2.Get_X() << endl;
	cout<< "The y value for p2 is " << p2.Get_Y() << endl;

	// Moving point p2 by (1, -1):
	p2.Move(1, -1);
	cout<< "After the move:" << endl;
	cout<< "The x value for p2 is " << p2.Get_X() << endl;
	cout<< "The y value for p2 is " << p2.Get_Y() << endl;

	//Lab 10 exercise 4.1. Test member function print on points p1, p2:
	p1.Print();
	p2.Print();
	//Lab 10 Exercises 4.2, 4.3. Testing of the class Rectangle goes here:  
	//user input
	cout<<"Enter bottom right point, x y\n";
	cin>>x1>>y1;
	cout<<"Enter top left point, x y\n";
	cin>>x2>>y2;
	//create point objects
	Point p3(x1,y1);
	Point p4(x2,y2);
	//create rectangle objects
	Rectangle r1(p3,p4);
	Rectangle r2;
	//print coordinates
	cout <<"Rectangle1\n";	
	r1.Print();
	cout <<"Rectangle2(default)\n";
	r2.Print();
	//display area
	cout <<"Area of Rectangle1 = "<<r1.area()<<endl;
	cout <<"Area of Rectangle2 = "<<r2.area()<<endl;
	return 0;
}

//---------------------- point.cpp ------------------------------------//


