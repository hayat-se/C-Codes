#include<iostream>
using namespace std;

class BankAccount
{
    string accountNumber;
    int balance;

    public:
        BankAccount();
        BankAccount(string , int);
        void setAccountDetails();
        void deposite(int);
        void withdraw(int);
        
        friend void InquireyBalance(BankAccount);
};

BankAccount ::BankAccount()
{
    accountNumber = "";
    balance = 0;
}

BankAccount ::BankAccount(string accNum, int bal)
{
    accountNumber = accNum;
    balance = bal;
}

void BankAccount::setAccountDetails()
{
    cout<<"Enter Account Number : ";
    cin>>accountNumber;
    cout<<"Enter Balance : ";
    cin>>balance;
}

void BankAccount ::deposite(int amm)
{
    balance += amm;
    cout<<amm <<" Ammount deposite Successfully...... \n";
    cout<<"New Balance : "<<balance <<endl;
}

void BankAccount ::withdraw(int amm)
{
    if(amm <0 || amm > balance )
    {
        cout<<"Error! Enter Valid Ammount ...";
    }else
    {
    balance -= amm;
    cout<<amm <<" Ammount Withdraw Successfully...... \n";
    cout<<"New Balance : "<<balance <<endl;
    }
}

void InquireyBalance(BankAccount b1){
    char op;
    cout<<"Current Balance : "<<b1.balance <<"\n";
    cout<<"Would you want to change balance? (Y/N) : ";
    cin>>op;
    if(op == 'Y' || op =='y')
    {
        int change_Balance;
        int balance_op;
        cout<<"1. Deposite Balance \n2. Withdraw Balance \n\n";
        cout<<"Enter Option : ";
        cin>>balance_op;
        if(balance_op == 1){
            cout<<"Enter Ammount : ";
            cin>>change_Balance;
            b1.deposite(change_Balance);
        }else if(balance_op == 2){
            cout<<"Enter Ammount : ";
            cin>>change_Balance;
            b1.withdraw(change_Balance);
        }else{
            cout<<"Invalid Input, Program Finished ......\n";
        }
    }else if(op == 'N' || op == 'n')
    {
        char choice;
        cout<<"Would You Want to Check Balance ? (Y/N) : ";
        cin>>choice;
        if(choice == 'Y' || choice == 'y')
        {
            cout<<"Current Balance : "<<b1.balance <<endl ;
        }else if(choice == 'N' || choice == 'n')
        {
            cout<<"Okay Program Exiting ....... \n";
            exit(0);
        }
        else{
            cout<<"Invalid Input , Program Finished .....";
        }
    }
}

int main()
{
    BankAccount b1;
    b1.setAccountDetails();
    InquireyBalance(b1);
}