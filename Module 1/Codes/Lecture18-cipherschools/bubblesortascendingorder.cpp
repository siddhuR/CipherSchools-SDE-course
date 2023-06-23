#include <iostream>
using namespace std;
int main()
{
    int i;
    int a[10];

    cout<<"Enter the numbers to be sorted : ";

    for (i = 0; i < 10; i++)
    {
        cin>>a[i];
    }
    
    int j;
    for (j = 9;  j > 0; j--)
    {

    int temp;

    for(i= 0; i<j; i++)
    {
        if (a[i]<a[i+1])
        {
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;            
        }

    }
        
    }

    for (i = 0; i < 10; i++)
    {
        cout<<a[i]<<" ";
    }
    



}