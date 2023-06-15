#include<iostream>
using namespace std;

int main()
// while loop--------------
/* {
    int password;

    cout<<"Enter the password: "<<endl;
    cin>>password;

    while(password<999999)
    {
        cout<<"The passsword does not meet the required conditions, please enter the password again"<<endl;
        cin>>password;
    }

    cout<<"The user has entered a correct password"<<endl;  
} */

//do while loop--------------------------------
/* 
{
    int password;

    do
    {
        cin>>password;
    } while (password<999999);
    

    // cout<<"Enter the password: "<<endl;
    // cin>>password;

    // while(password<999999)
    // {
    //     cout<<"The passsword does not meet the required conditions, please enter the password again"<<endl;
    //     cin>>password;
    // }

    // cout<<"The user has entered a correct password"<<endl;  
}
*/

//while loop-----------------------
/* 
{
    int password, count=0;

    while (1)
    {
        cout<<"chocolates "<<endl;
        count++;

        if (count>100) break;        
    }
    
}
*/

//For loop---------------------------

{
    int i;

    for(i=0;    ;i++)
    {
        cout<<i<<" ";
        if (i>100) break;        
    }
    return 0;    
}