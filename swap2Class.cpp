#include<iostream>
using namespace std;

class Swap2;
class Swap1
{
    int x;

    public:
    Swap1(int x)
    {
        this->x = x;
    }
    void printX()
    {
        cout<<"swap 1 x = "<<this->x <<endl;
    }

    friend void swap(Swap1& ,Swap2&);
};

class Swap2
{
    int x;

    public:
    Swap2(int x)
    {
        this->x = x;
    }

    void printX()
    {
        cout<<"swap 2 x = "<<this->x <<endl;
    }

    friend void swap(Swap1& ,Swap2&);
};

void swap(Swap1 &o1 , Swap2 &o2)
{
    int temp = o1.x ;
    o1.x = o2.x ; 
    o2.x = temp;
}

int main()
{
    Swap1 s1(5);
    Swap2 s2(10);
    s1.printX();
    s2.printX();
    swap(s1,s2);
    s1.printX();
    s2.printX();


}