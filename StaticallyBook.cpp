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
        cout<<"Book Name : "<<name<<endl;
        cout<<"Book Price : "<<price <<"\n\n";
    }

};

int main()
{
    Book books[3];
    for(int i=0 ; i<3 ; i++)
    {
        string _name;
        float _price;
        cout<<"Enter Book "<<i+1 <<" name : ";
        cin>>_name;
        cout<<"Price of Book "<<i+1 <<" : ";
        cin>>_price;
        books[i].setDetails(_name , _price);
    }

    for (int i = 0; i < 3; i++)
    {
        books[i].showDetails();
    }
    

}