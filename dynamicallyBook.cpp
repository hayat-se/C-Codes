#include<iostream>
using namespace std;

class Book
{
    string name;
    float price;

    public:

    Book()
    {
        name  = "";
        price = 0;
    }

    Book(string n , float p)
    {
        name  = n ;
        price = p;
    }
    void setDetails(string n, float p)
    {
        name = n;
        price = p;
    }

    void showDetails()
    {
        cout<<"\nBook Name : "<<name<<endl;
        cout<<"Book Price : "<<price <<"\n";
    }
};


int main()
{
    int sz;
    cout<<"Enter how Many books you Want to add : ";
    cin>>sz;
    Book *books = new Book[sz];

    for(int i=0 ; i<sz ; i++)
    {
        string _name;
        float _price;
        cout<<"Enter Book "<<i+1 <<" name : ";
        cin>>_name;
        cout<<"Price of Book "<<i+1 <<" : ";
        cin>>_price;
        books[i].setDetails(_name , _price);
    }

    for(int i=0; i<sz ; i++)
    {
        books[i].showDetails();
    }

    delete[] books;  // to free storage and avoid memory leak.

}