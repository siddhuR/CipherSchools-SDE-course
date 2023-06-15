#include<iostream>
using namespace std;

int main()
{
    /*
    int a,b,c,d;


    cout<<"Input 4 integers a, b, c and d"<<endl;

    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;

    //statement : a>b

    cout<<(a>b && c>d)<<endl;
    cout<<(a>b || c>d);
    
    */

   /* float a,b;
   cout<<"Give 2 floating point numbers as input";
   cin>>a>>b;

   if(a>0.01 && b>a)        // Try this condition (a>0.01 || b>a)
   {
    cout<<"The Condition in if statement is correct";
   }
   else
   {
    cout<<"The condition is false";
   } */


   /* int a,b,c,d;
   cout<<"Give three integers as input : a,b,c"<<endl;
   cin>>a>>b>>c>>d;

   if(a>b && c>d)
   {
    cout<<"haha";
   }
   else if(a>b && c<d)
   {
    cout<<"hehe";
   }
   else (a<b && c>d);
   {
    cout<<"huhu";
   } */


   int a;

   cout<<"enter a integer a "<<endl;
   cin>>a;

   switch (a)
   {
   
   case 1:
   cout<<"The value of a is 1"<<endl;
    break;
   case 2:
    cout<<"The value of a is 2 "<<endl;
    break;
   case 3:
    cout<<"The value of a is 3 "<<endl;

   
   default:
   cout<<"default will be always printed";
    break;
   }
   return 0;




}