#include<iostream>
using namespace std;
int main()
{
    int a[10];

    int i;
    for(i=0;i<10;i++)
    cin>>a[i];

    // start of selection sort

    int least_index;    // stores the index of the least element

    int j;

    for (i=0;i<9;i++)
    {

    least_index = i;

    for(j=i; j<10; j++)
    {
        if(a[j]<a[least_index]) least_index=j;  // if we find an index in j=(0,9) at which a[j] is less than the least index which we have assumed, then this j will be the least index

    }

    int temp;

    temp = a[i];
    a[i] = a[least_index];
    a[least_index] = temp;



    
    }

    cout<<"The elements after sorting are : ";
    for(i=0; i<10; i++) cout<<a[i]<<" ";


    }

