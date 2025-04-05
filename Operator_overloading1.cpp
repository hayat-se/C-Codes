#include<iostream>
using namespace std;

class ComplexNumber
{
    int real , imaginary;

    public:
    ComplexNumber operator+( ComplexNumber o1)
    {
        ComplexNumber result;
        result.real = this->real + o1.real ;
        result.imaginary = this->imaginary + o1.imaginary;
        return result;
    }

    ComplexNumber();
    ComplexNumber(int , int);
    void printDetails();
};
ComplexNumber::ComplexNumber()
{
    real = 0;
    imaginary = 0;
}

void ComplexNumber::printDetails()
{
    cout<<"Real Part : " <<real <<endl;
    cout<<"Imaginary Part : "<<imaginary <<endl;
}

ComplexNumber::ComplexNumber(int x, int y)
{
    real = x;
    imaginary = y;
}

int main()
{
    ComplexNumber c1(12,34), c2(5,8) ,c3;
    c3 = c1+c2;
    c3.printDetails();
    
}