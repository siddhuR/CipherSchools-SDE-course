#include <iostream>
using namespace std;

/*

class Student
{
    public:
    // what is public ??

    string name;
    int attendance;
    int total_marks;

    void calculate_percentage()
    {
        cout<<total_marks<<"%";
    }
};

int main() {
    Student a,b,c;

    // Student is the class
    // and a,b,c are the objects of that template / class

    a.name = "Siddhu";
    a.attendance = 90;
    a.total_marks = 69;

    a.calculate_percentage();

    return 0;
}

*/


// assume that you arre making a software for a bank

/*
// Public Specifier
class Bank_Client
{
    public:

    string name;
    int credit_number;
    int cvv;
    string user__name;
    string password;

};

int main() {

    Bank_Client a,b,c;

    a.name = "siddhu";
    a.password = "Enjoyc++";
    a.cvv = 989;
    a.credit_number=345678;

    cout<<"The password of siddhu is"<<a.password;
    cout<<a.cvv<<endl;
    cout<<a.credit_number<<endl;    


    return 0;
}
*/

// private Specifier
class Bank_Client
{
    private:

    int credit_number;
    int cvv;
    string password;

    public:
    string name;
    string user__name;

    // we use public function to set private data
    // private members are accessible inside class and ONLY INSIDE THE CLASS

    // *** to access stuf of an objectt you definetly need a public elements, as private elements of 

    void set_credit_card_number(int credit_number) {
        this->credit_number = credit_number;
        // the pointer to the object is inherently passed by a pointer called this
        cout << "The address of the object calling this function is"<<this<<endl;
    }
    int get_credit_card_number() {
        cout<<"The credit card number is "<<credit_number;
        return credit_number;
    }

    void set_allthestufatonce(int credit_number, int name, int password)
    {
        this->credit_number = credit_number;
        this->name = name;
        this->password = password;
    }

    //Every object when we define a function, inherently passes the pointer of the object and the pointer is called !"this"

    // we use get functions to get the data
    // we use set functions to set the data

};

int main() {

    Bank_Client a,b,c;

    a.name = "siddhu";
    a.user__name = "siddhu";
    a.set_credit_card_number(93849);
    // In this function, other than the parameters of the function, we also pass the pointer of the object of this class, and the pointer is refered to by "this"
    
    cout<<"The address of this object is "<<&a<<endl;

    return 0;
}
