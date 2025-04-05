#include<iostream>
using namespace std;

class Student
{
    string name;
    int age;
    int marks[3];

    public:

    Student(string , int);
    void setMarks();
    friend class Exam;
};

class Exam
{
    int totalMarks;

    public:
    void printResult(Student s1)
    {
        int sum=0;
        for(int i=0 ; i<3 ; i++)
        {
            sum+= s1.marks[i];
        }
        totalMarks = sum;

        cout<<"Student Name : "<<s1.name <<endl;
        cout<<"Studet Age : "<<s1.age <<endl;
        cout<<"Student Total Marks : "<<totalMarks <<"/" <<300;
    }
};

void Student::setMarks()
{
    for(int i=0 ; i<3 ; i++)
    {
        cout<<"Enter subject "<<i+1 <<" marks : ";
        cin>>marks[i];
    }
}

Student::Student(string name , int age )
{
    this->name = name;
    this->age = age;
}


int main()
{
    Student s1("Hayat Nabi" , 18 );
    s1.setMarks();

    Exam e1;
    e1.printResult(s1);

}


