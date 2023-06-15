#include<iostream>
using namespace std;

int main()
// {
//      int i,j,k;
//      i=0;
//      j=0;
//      k=0;

//     /*  for(i=1;  ;i++)   
//      {
//         cout<<i<<" ";
//      } */

//      cout<<i<<" "<<j<<" "<<k<<endl;
//      j = i++;
//      cout<<i<<" "<<j<<" "<<k<<endl;
//      k = ++i;
//      cout<<i<<" "<<j<<" "<<k<<endl;

//     /*  cout<<++i<<endl;
//      cout<<i;
//  */


// }


// {
//     int i;

//     for(i=1;i<101 ;i++)  // called the update which happens after the interaction(part of a loop is completed)
//     {
//         //block which gets executed everytime

//         cout<<i<<" ";
//     }
// }


//------------------while loop
{
    /* int i;
    i=1;            //initializatioin

    while(i<101)        //condition
    {
        cout<<i<<" ";   //loop
        i++;            //update
    }
 */

int i;
int input;

// guess the number 65
// the user has 100 chances

i=100;

for(i=1;i<101;i++)
{
    cin>>input;
    if(input == 65) //only takes place if the input is exactly 65
    {
        cout<<"Congrats you have guessed correct";
        break;
    }
}










}