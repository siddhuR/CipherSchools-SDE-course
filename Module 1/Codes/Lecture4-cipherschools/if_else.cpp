#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"Student, please enter the marks to calsulate teh grade: ";
    cin>>marks;

    /* if (marks>90)
    {
        cout<<"A";
    }
    if (marks<90 && marks>80)
    {
        cout<<"B";
    }
    if (marks<80 && marks > 70)
    {
        cout<<"C";
    }
    if (marks<70)
    {
        cout<<"Pass";
    } */



    if (marks>90)
    {
        cout<<"A";
    }
    else if (marks>80)
    {
        cout<<"B";
    }
    else if (marks > 70)
    {
        cout<<"C";
    }
    else
    {
        cout<<"Pass";
    }



    return 0;
}