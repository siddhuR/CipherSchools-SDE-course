#include<iostream>
using namespace std;

void swap(int *x, int *y)   //a,b are different
{
    int c;      //x and y are the pointers to a,b --> they store the address of a and b

    c = *x;     //to get a,b from x and y we need to dereference the pointer
    *x = *y;
    *y = c;

    cout<<"The swapping is complete"<<endl;

}

int main()
{
    int a,b;

    a=3;
    b=4;

    swap(&a,&b);

    cout<<"the values of a and b after the swap are : "<<a<<" "<<b;

    return 0;
}