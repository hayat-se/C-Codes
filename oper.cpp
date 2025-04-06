#include<iostream>
using namespace std;

class Employee
{
    double ratePerHours;
    int workedHours;
    public:
    Employee(){
        ratePerHours = 0;
        workedHours = 0;
    }
    Employee(double rate , int hours){
        ratePerHours = rate;
        workedHours = hours;
    }
    void setDetails(double rate ,int hours){
        this->ratePerHours = rate;
        this->workedHours = hours;
    }

    void operator*(){
        double salary ;
        salary = this->ratePerHours * this->workedHours ;
        cout<<"Salary : "<<salary <<"\n\n";
    }
};


int main()
{
    
    int n;
    cout<<"Enter Number of Employees : ";
    cin>>n;
    Employee * o = new Employee[n];
    for (int i = 0; i < n; i++)
    {
        double hrsRate;
        int hours;
        cout<<"ENter rate : ";
        cin>>hrsRate;
        cout<<"Enter hors : ";
        cin>>hours;
        o[i].setDetails(hrsRate , hours);
        //*o[i]; 
    }

    delete[] o;
    
    

}
