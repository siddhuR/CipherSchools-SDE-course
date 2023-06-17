#include<iostream>
using namespace std;

void PrintHI()
{
    cout<<"Hi"<<endl;
    return;
}

int sum(int a, int b)
{
    int c;
    c=a+b;
    a=500;
    
    cout<<"The value of c is "<<c<<endl;

    return c;
}

int main()
{
    PrintHI();

    int a,b;
    int c;

    a=4;
    b=6;

    c=75;   //the value of c over here in the main function is 75

    int d;
    d = sum(a,b);
    
    // cout<<"The sum is equal to "<<d<<" "<<"The value of a is "<<a;   "
    cout<<"The value of c is equal to "<<c<<endl;

    return 0;
}