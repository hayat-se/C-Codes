#include<iostream>
using namespace std;

class Vector2D
{
    int x,y;

    public:

    Vector2D()
    {
        x = 0;
        y = 0;
    }

    Vector2D(int x , int y)
    {
        this->x = x;
        this->y = y;
    }

    Vector2D operator-(Vector2D o1)
    {
        Vector2D v1;
        v1.x = o1.x - this->x;
        v1.y = o1.y - this->y;
        
        return v1;
    }

    void printDefference()
    {
        cout<<x <<" , "<<y<<endl;
    }
};

int main()
{
    Vector2D v1(2,5),v2(4,5),v3;
    v3 = v1-v2;
    cout<<"The Difference is : ";
    v3.printDefference();
}