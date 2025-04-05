#include<iostream>
using namespace std;

class AClass{
    int x;
    public:
    AClass(int x){
        this->x = x;
    }
    AClass(){
        x = 0;
    }

    friend class ClassB;
};

class ClassB{
    public:
    void IncShow(AClass o1){
        
        cout<<"Before Increment, x : "<<o1.x <<endl;
        o1.x++;
        cout<<"After Increment, x : "<<o1.x <<endl;
    }
};

int main(){
    AClass a1(10);
    ClassB c;
    c.IncShow(a1);

}