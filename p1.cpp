#include<iostream>
using namespace std;

class Person
{
    string name, country;
    int age ;

    public:
    Person();
    Person(string , int , string);
    void printDetails();
    
};

Person::Person()
{
    name = "";
    country = "";
    age = 0;
}

Person::Person(string name , int age , string country="Unknown")
{
    this->name = name;
    this->country = country;
    this->age= age;
}

void Person::printDetails()
{
    cout<<"Name : "<<name <<endl;
    cout<<"Age : "<<age <<endl;
    cout<<"Country : "<<country <<endl;
}

int main()
{
    Person p1("Hayat Nabi",18, "Pakistan");

    p1.printDetails();
}