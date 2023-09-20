#include <iostream>
using namespace std;

class Complex
{
    private:
    
    float real;
    float img;

    
    public:

    Complex(int real_value, int img_value) {
        real = real_value;
        img = img_value;
    };

    void set_perameters(int real, int img)
    {
        this->real = real;
        this->img = img;
    }

    void distancefromOrigin()
    {
        float dist;

        dist = real*real + img*img;

        cout << "the distance from origin is"<<dist;
        return;
    }
};

// int main() {
//     Complex a, b;
//     a.set_perameters(3,4);
//     a.distancefromOrigin();

//     return 0;

// }


// I am a merchant and defining a class to store the amoung which the user gives to me and the  number of days of the it has been since the user has given me money.

class New_account
{
    public:

    int amount;
    int days;

    New_account(int amount_initial, int days_initial)     // Constructor
    {
        amount = amount_initial;
        days = days_initial;

        cout<<"The constructor is called now";
    }

    void print_amount_details()
    {
        cout<<"The amount is "<<amount<<" The number od days is "<<days<<endl;
    };

    ~New_account()     // Constructor
    {
        cout<<"Now the use of the object is complete and the object is getting destroyed";
    }
    

};

class motorbike
{
    public:
    int num_wheels;
    int lights;
};


int main() {
    New_account a(0,0);
    // a.initial();
    a.print_amount_details();

    // This function needs to be called everytime the object is created to set the parameters

    New_account b(100, 5);
    b.print_amount_details();


    cout<<endl<<"Here all the functions and calxulations take place" <<endl;
    
    Complex(3,3);
    Complex(3,5);
    return 0;
}