#include<iostream>
using namespace std;

class Rectangle
{
    double length, width;

    public:
    Rectangle(double , double);
    friend double getArea(Rectangle);
};

Rectangle::Rectangle(double length , double width)
{
    this->length = length;
    this->width = width;
}

double getArea(Rectangle o1)
{
    double area = o1.length * o1.width ;
    return area;
}


int main()
{
    Rectangle r1(5,2);
    cout<<"Area : "<<getArea(r1);

}