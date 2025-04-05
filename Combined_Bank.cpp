#include<iostream>
using namespace std;

class Bank{
    int accNum;
    double balance;

    public:
    Bank();
    Bank(int , double);
    void getDetails();
    static int totalAccounts;
    static void getTotalAccounts();
    friend class Manager;
};

Bank::Bank(int aN , double b){
    accNum = aN;
    balance = b;
}

Bank::Bank(){
    accNum = 0;
    balance = 0;
}

void Bank:: getDetails(){
    cout<<"Account Number : "<<accNum <<endl;
    cout<<"Current Balance : "<<balance <<endl;
}

int Bank::totalAccounts=0;

void Bank::getTotalAccounts(){
    cout<<"Total Accounts : "<<totalAccounts <<endl;
}

class Manager{
    public:
    void IncreaseBalance(Bank &, int);
    void DecreaseBalance(Bank &, int);

};

void Manager::IncreaseBalance(Bank &b1,int x){
    b1.balance += x;
}

void Manager::DecreaseBalance(Bank &b1,int x){
    b1.balance -= x;
}

int main(){
    Bank b1(121,10000),b2(111,7000),b3(131,5000);
    b1.getDetails();
    Manager m1;
    m1.IncreaseBalance(b1,500);
    b1.getDetails();

}