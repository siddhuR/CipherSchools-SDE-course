/*
// Encapsulation

#include<iostream>
using namespace std;

class Student
{
    private:
    int marks;
    int attendance;
    string name;

    public:

    void displaymarks()
    {
        cout<<marks;
    }
};

int main()
{
    int marks;
    int attendance;
    string name;
}
*/

#include<iostream>
using namespace std;

// The Vehicle is a base class

class Vehicle
{
    public:

    int number_tyers;
    string name;
    int Capacity;
    int mileage;

    public:

    void calculatemileage()
    {
        cout<<"The mileage is "<<mileage<<endl;
    }

};

// Now i will inherit the features of the base class into the derived classes

class SchoolBus: public Vehicle
{
    private:
    string school_name;
    int numberr_holidays;

    public:

    

    void printnameofschool()
    {
        cout<<"The name of the school is "<<name;
    }
};

class Car: public Vehicle
{
    private:

    int number_airbags;
    int ac_consumption;


};

int main()
{
    Car a;

    a.mileage = 50;

    a.calculatemileage();

}