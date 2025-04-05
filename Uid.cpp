#include<iostream>
using namespace std;

class User
{
    string name;
    int userId;

    public:
    User(string n)
    {
        name = n;
        userId = nextUserId;
        nextUserId++;
    }
    void setName(string n)
    {
        name = n;
    }
    static int nextUserId;
    User()
    {
        userId = nextUserId;
        nextUserId++;
    }
    void getUserDetails()
    {
        cout<<"Name : "<<name <<endl;
        cout<<"User ID : "<<userId<<endl;
    }
};

int User::nextUserId = 101;

int main()
{
    int n;
    cout<<"Enter how Much user to Store : ";
    cin>>n;
    User *ptr = new User[n];
    for(int i=0 ; i<n ; i++)
    {
        string name;
        cout<<"Enter Name : ";
        cin>>name;
        ptr[i].setName(name);
    }

    for(int i=0 ; i<n ; i++)
    {
        ptr[i].getUserDetails();
        cout<<"\n";
    }

}