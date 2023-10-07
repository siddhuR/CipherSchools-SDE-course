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

    //public:

    // void calculatemileage()
    // {
    //     cout<<"The mileage is "<<mileage<<endl;
    // }

};

// Now i will inherit the features of the base class into the derived classes

class SchoolBus: public Vehicle
{
    private:
    string school_name;
    int numberr_holidays;

    public:

    

    void name()
    {
        cout<<"hello"<<name;
    }
};

class Car: private Vehicle
{
    public:

    int number_airbags;
    int ac_consumption;

    public:
    void printname(int milage)
    {
        //this->mileage = milage;
        cout<<name;
    }

    void printname()
    {
        cout<<"The mileage is "<<mileage<<endl;
    }


};

class SUV: public Car
{
    public:

    int four_Wheel_drive;
};


int main()
{
    // SUV a;

    // a.set_milage(50);

    // a.calculatemileage();

    Car a;
    SchoolBus b;

    a.name = "Suzuki";
    b.name = "Toyota";

    a.printname();
    cout<<endl;
    b.printname();

}