#include<iostream>
using namespace std;

class C;

class A
{
    int x;

    public:
    A()
    {
        x = 0;
    }
    A(int x)
    {
        this->x = x;
    }

    friend class C;
};

class B
{
    int x;

    public:

    B()
    {
        x = 0;
    }

    B(int x)
    {
        this->x = x;
    }
    friend class C;

};

class C
{

    public:
    void printDetails(A o1,B o2)
    {
        cout<<"A class x : "<<o1.x <<endl;
        cout<<"B class x : "<<o2.x <<endl;
    }
};

int main()
{
    A x1(2);
    B x2(5);
    C x3;
    x3.printDetails(x1, x2);
}