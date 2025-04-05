#include<iostream>
using namespace std;


class New
{
    int num;
    public:
    New(){
        num = 0;
    }
    New(int x){
        num = x;
    }

    void operator++()
    {
        cout<<"Before Increment : "<<num <<endl;
        num++;
        cout<<"After Increment : "<<num <<endl;
    }
};

int main()
{
    New o1;
    ++o1;

}