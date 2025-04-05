#include<iostream>
using namespace std;

class Employee{
    string name;
    int salary;
    int employeeId;


    public:
    friend class HR;
    Employee();
    Employee(string, int, int);
    void getEmployeeDetails();
    static int totalEmployees;
    static int getTotalEmployees();

};

Employee::Employee(){
    name = "";
    salary = 0;
    employeeId = 0;
    totalEmployees++;
}

Employee::Employee(string n , int s, int Id){
    name = n;
    salary = s;
    employeeId = Id;
    totalEmployees++;
}

void Employee :: getEmployeeDetails(){
    cout<<"Name : "<<name <<endl;
    cout<<"Employee ID : "<<employeeId<<endl;
    cout<<"Salary : "<<salary <<"\n\n";
}

int Employee::totalEmployees=0;
int Employee::getTotalEmployees(){
    return totalEmployees;
}

class HR{
    public:
    void increaseSalary(Employee &, int);
    void decreaseSalary(Employee &,int);
};

void HR::increaseSalary(Employee &o1,int x){
    o1.salary += x;
}

void HR::decreaseSalary(Employee &o1,int x){
    o1.salary -= x;
}

int main(){
    Employee e1("Hayat Nabi",100000,121),e2("Abdullah Dilawar",120000,112),e3("Haider Abbas",150000,113);
    e1.getEmployeeDetails();
    HR o1;
    int op;
    cout<<"1. Increase \n2. Decrease \n\nEnter do you Want to Increase Salary or Decrease ? : ";
    cin>>op;
    if(op==1){
        int ammount;
        cout<<"Enter Ammount : ";
        cin>>ammount;
        o1.increaseSalary(e1,ammount);
    }else{
        int ammount;
        cout<<"Enter Ammount : ";
        cin>>ammount; 
        o1.decreaseSalary(e1,ammount);
    }
    e1.getEmployeeDetails();
    cout<<"Total Employees : "<<Employee::getTotalEmployees();

}