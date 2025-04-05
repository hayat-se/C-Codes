#include<iostream>
using namespace std;

class Box{
    int length, width, height;

    public:
    Box(int length , int width , int height)
    {
        this->length = length ; 
        this->width = width ; 
        this->height = height;
    }

    friend void isEqual(Box , Box);
};

void isEqual(Box o1, Box o2)
{
    if(o1.length == o2.length && o1.width == o2.width && o1.height == o2.height)
    {
        cout<<"Boxes are 'Equal' \n";
    }else
    {
        cout<<"Boxes are 'Not-Equal'";
    }
}

int main()
{
    Box b1(1,2,3), b2(1,2,3);
    isEqual(b1,b2);
}