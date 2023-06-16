#include<iostream>
using namespace std;

//int compare(int a, int b)     //compare 2 integers and returns the greatest
/*
{
    int c;
    if(a>b)
    {
        c=a;
    }
    else
    {
        c=b;
    }
    //now c will store the maximum of a,b

    return c;
} 
*/

/* {
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
} */

/* {
    if(a==5)
    {
        return 1;
    }
    return 0;
} */


int sum(int a, int b)
{
    int c;
    a=10;
    b=11;
    
    c=a+b;

    return c;
}

int main()
{
    int a,b;

    a=3;
    b=5;

    int c;
    cout<<a<<b<<endl;   //values of a and b is before caling function

    c= sum(a,b);
    //int sum(int a, int b) // int a --> a, int b --> b

    cout<<c<<endl;
    cout<<a<<b<<endl;   //values of a and b is after calling the function

    return 0;
}