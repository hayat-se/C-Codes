#include<iostream>
using namespace std;

class Student
{
    string name;
    int age, marks;
    public:
    friend class Result ;
    
    public:
    Student(string , int , int);
    Student(){
        cout<<"Default Constructor\n";
    }
};

Student ::Student(string n , int a , int m)
{
    name = n;
    age = a;
    marks = m; 
}

class Result {
    public:
    void printDetails(Student s1)
    {
        cout<<"Name : "<<s1.name <<endl;
        cout<<"Age : "<<s1.age <<endl;
        cout<<"Marks : "<<s1.marks <<endl;
    }
    Result(){
        cout<<"Nothing\n";
    }
    
};

int main()
{
    Student s1("Hayat Nabi" , 18 , 400);
    Result r1;
    r1.printDetails(s1);
}