//
//  Rectangle.cpp
//  10 - Graded Discussion - Rectangle class
//
//  Created by Kristian Mitchell on 11/1/25.
//

#include "Rectangle.h"
#include <iostream>
using namespace std;

void Rectangle::setWidth(double w)
{
    if (w >= 0)
      {
        width = w;
      }
    else
      {
        cout << "Invalid width\n";
      }
}

void Rectangle::setLength(double len)
{
    if (len >= 0)
      {
        length = len;
      }
    else
      {
        cout << "Invalid length\n";
      }
}

bool Rectangle::isSquare() const
{
    if (width == length)
      {
        return true;
      }
    else
      {
        return false;
      }
}
