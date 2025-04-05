#include<iostream>
using namespace std;

class ClassB;

class ClassA
{
    int x;

    public:
    ClassA(int x){
        this->x = x;
    }

    friend void add(ClassA, ClassB); 
};

class ClassB
{
    int x;

    public:
    ClassB(int x){
        this->x = x;
    }
    friend void add(ClassA, ClassB); 
};

void add(ClassA n1 , ClassB n2){
    int sum = n1.x + n2.x;
    cout<<"Sum : "<<sum<<endl;
}


int main()
{
    ClassA c1(5);
    ClassB c2(10);
    add(c1,c2);

}