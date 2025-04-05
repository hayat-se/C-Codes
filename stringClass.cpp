#include<iostream>
using namespace std;

class StringHandler
{
    string x;

    public:
    StringHandler(string x)
    {
        this->x = x;
    }

    friend void mergerStrings(StringHandler , StringHandler);
};

void mergerStrings(StringHandler o1, StringHandler o2)
{
    string merged = o1.x + o2.x;

    cout<<"Concatenated string of Two objects : "<<merged<<endl;
}

int main()
{
    StringHandler s1("Hayat") , s2(" Nabi");
    mergerStrings(s1,s2);
}