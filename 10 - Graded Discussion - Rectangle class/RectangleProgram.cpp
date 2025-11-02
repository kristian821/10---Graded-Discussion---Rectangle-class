/*
 Question 1
 Implement the Rectangle class as discussed in the videos and pdfs.

 Enhance the Rectangle class with two new member functions:

 double getPerimeter() - returns the perimeter of the rectangle, i.e. 2*width+2*length
 bool isSquare() - returns true if the rectangle is a square, i.e. length is equal to width, returns false if not
 Demonstrate your class works with a main function that instantiates a Rectangle object, and shows sample output for these functions working

 Question 2
 Take your Rectangle program from Question 1 and split it into three files:

 Rectangle.h - class declaration
 Rectangle.cpp - class implementation
 RectangleProgram.cpp - main program
 Modify your Rectangle program so that getWidth() and getLength() are inline member functions, defined in the class declaration in Rectangle.h.  The other member functions should be defined in Rectangle.cpp.

 Demonstrate your class works with a main function in RectangleProgram.cpp that instantiates a Rectangle object, creates a pointer to this object, and uses this pointer to call the member functions.

 Paste all three of your files to this discussion when you are finished.  Make sure to clearly indicate which file is which.
*/
//
//  main.cpp
//  10 - Graded Discussion - Rectangle class
//
//  Created by Kristian Mitchell on 11/1/25.
//

#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    double number;
    Rectangle *square = nullptr;
    
    cout << "Enter the width: " << endl;
    cin >> number;
    square->setWidth(number);
    
    cout << "Enter the length: " << endl;
    cin >> number;
    square->setLength(number);
    
    cout << "Width: " << square->getWidth() << endl;
    cout << "Length: " << square->getLength() << endl;
    cout << "Area: " << square->getArea() << endl;
    cout << "Perimeter: " << square->getPerimeter() << endl;
    cout << "Square: " << square->isSquare() << endl;
    
    
    return 0;
}
