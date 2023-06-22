#include<iostream>
using namespace std;

int main()
{
    /* char s,i,d;
    cin>>s>>i>>d; 
    cout<<"The name you have just entered is "<<s<<i<<d;
    */

    /* char name[5];
    int i;
    
    for (i = 0; i < 5; i++)
    {
        cin>>name[i];
    }
    cout<<name[i]; 
    
    */


    
    // char name[1000];

    // cout<<"Enter your name : ( Note: Enter # after the end of your name: )";

    // int i=0;      // Initial value of i is 0

    // while(1/* name[i]!='#' */)     // Heree i is the previous input
    // {
    //     cin>>name[i];

    //     if(name[i]=='#') break;

    //     i++;    //When the name is begin entered, the value of i is increasing
    // }

    // i=0;        //Again need to change the value of i to 0 before running the second while loop

    // cout<<"The name you have just entered is "<<endl;
    
    // while(name[i]!='#') //we have  again used i
    // {
    //     cout<<name[i];
    //     i++;
    // }

    string name;    // over here string is a new datatype and not a name so string is similar to int, float, double and so on...

    cin>>name;

    //cout<<name;

    int i;
    for(i=0;i<5;i++)
    {
        cout<<name[i]<<endl;
    }
     

}