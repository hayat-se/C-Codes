#include<iostream>
#include<cmath>
using namespace std;

class Point
{
    int x , y;

    public:
    Point(int , int);
    friend void calculateDistance(Point , Point);
};

Point::Point(int x , int y)
{
    this->x = x;
    this->y = y;
}

void calculateDistance(Point o1 , Point o2)
{
    int xValue = (o2.x - o1.x);
    int yValue = (o2.y - o1.y);
    double distance = sqrt(pow(xValue ,2) + pow(yValue , 2)); 

    cout<<"Distance between ("<<o1.x <<","<< o1.y <<")" << " and ("<<o2.x <<"," <<o2.y <<") is : " << distance <<endl;
}

int main()
{
    Point p1(3,2) , p2(5,6);
    calculateDistance(p1,p2);
}