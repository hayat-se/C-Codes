#include<iostream>
using namespace std;

class Car{
    int speed;

    public:
    Car();
    Car(int);
    friend class Speedometer;
};

Car::Car(){
    speed = 60;
}

Car::Car(int s){
    speed = s;
}

class Speedometer{
    public:
    void DisplaySpeed(Car o1){
        cout<<"Car Speed : "<<o1.speed <<" km/h" <<endl;
    }
};

int main(){
    Car c1(70);
    Speedometer s1;
    s1.DisplaySpeed(c1);
}