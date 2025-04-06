#include<iostream>
using namespace std;

class Student
{
    string *name;
    int age;

    public:

    Student()
    {
        name = new string();
        age = 0; 
    }
    Student(string name , int age)
    {
        this->name = new string(name);
        this->age = age;
    }
    void showDetails()
    {
        cout<<"Name : "<<*name <<endl;
        cout<<"Age : "<<age <<"\n\n";
    }

};

int main()
{
    Student s1("Hayat Nabi" , 18), s2("M. Khubaib" , 19);
    s1.showDetails();
    s2.showDetails();
}