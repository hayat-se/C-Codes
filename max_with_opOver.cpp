#include<iostream>
using namespace std;

class MaxF
{
    public:

    int operator()(int a,int b)
    {
        if(a>b)
        {
            return a;
        }else
        {
            return b;
        }
    }
};

int main()
{
    MaxF m1;
    cout<<"Max Num :" <<m1(2,5);

}