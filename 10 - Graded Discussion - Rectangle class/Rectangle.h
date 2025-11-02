//
//  Rectangle.h
//  10 - Graded Discussion - Rectangle class
//
//  Created by Kristian Mitchell on 11/1/25.
//

#ifndef Rectangle_h
#define Rectangle_h

// Rectangle class declaration

class Rectangle
{
private:
    double width;
    double length;
public:
    void setWidth(double);
    void setLength(double);
    double getWidth() const
    { return width; }
    double getLength() const
    { return length; }
    double getArea() const
    { return width * length; }
    double getPerimeter() const
    { return 2 * width + 2 * length; }
    bool isSquare() const;
};

#endif /* Rectangle_h */
