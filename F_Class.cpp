#include<iostream>
using namespace std;

class Add{
    int x, y;
    public:	
    Add( ) 
    { 
           x=y=4; 
    }
    friend class Support;
};
class Support{
    public: 
        int sum (Add ob) 
    {               
        return (ob.x + ob.y);
    } 
};

void main( ){    
    Add ad;
    Support sup;
    cout << " The sum of the 2 members  " << sup.sum(ad);
}

