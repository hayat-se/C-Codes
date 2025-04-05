#include<iostream>
using namespace std;

class Calulator;
class Rectangle{
    double length, width;

    public:
    Rectangle();
    Rectangle(double , double);
    friend double Area(Rectangle);
};

class Calculator{
    double area;
    public:
    friend double Area(Rectangle );
};

double Area(Rectangle o1){
    double area = o1.length * o1.width;
    return area;
}


Rectangle::Rectangle(){
    length = 0;
    width = 0;
}

Rectangle::Rectangle(double l , double w){
    length = l;
    width = w;
}



int main(){
    Rectangle r1(4,6);
    cout<<Area(r1);
}