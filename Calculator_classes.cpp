#include<iostream>
using namespace std;

class Calculator;

class Numbers
{
    int num1 , num2;

    public:

    Numbers(int x ,int y)
    {
        num1 = x;
        num2 = y;
    }
    friend class Calculator;
};

class Calculator
{
    public:
    int sum(Numbers o1)
    {
        int sum = o1.num1 + o1.num2;
        return sum;
    }
};

int main()
{
    Numbers n1(12,23);
    Calculator c1;
    cout<<"sum : "<<c1.sum(n1);

}