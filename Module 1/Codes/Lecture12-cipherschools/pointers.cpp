#include<iostream>
using namespace std;

int main()
/* {
    int a;
    float b;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of b is "<<&b<<endl;

    return 0;
} */


{
    int a;
    int b;
    int c;

    int *p;
    int *q;


    p=&a;
    q=&b;


    a=2;
    b=5;

    c= *p+*q;

    // cout<<"The value of a is (from the actual variable type) "<<a<<endl;
    // cout<<"the value of a from the pointer using *(astrix/ indirection operation) "<<*p<<endl;
    
    cout<<"the value of c is: "<<c<<endl;

    cout<<"The address of a is "<<&a<<"The value of the pointer is "<<p;
    return 0;

}