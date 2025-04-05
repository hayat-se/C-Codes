#include<iostream>
using namespace std;

class Student{
    static int totalStudents;
    public:
    Student();
    static int getTotalStudents();
};

Student::Student(){
    totalStudents++;
}

int Student::totalStudents = 0;

int Student::getTotalStudents(){
    return totalStudents;
}


int main(){
    Student s1,s2,s3,s4,s5;
    cout<<"Total Students : " <<Student::getTotalStudents();
}