#include<iostream>
using namespace std;

class Bank
{
    int balance;
    
    public:
    Bank(int b)
    {
        balance = b;
    }
    void operator+=(int x)
    {
        balance += x;
    }
    void getBalance()
    {
        cout<<"Balance : "<<balance<<endl;
    }
};

int main()
{
    Bank b1(5000);
    b1+=2000;
    b1.getBalance();
}