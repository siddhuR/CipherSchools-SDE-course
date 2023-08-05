#include<iostream>
using namespace std;


int main()
{
    int a, b;
    cin>>a>>b;
    int arr[a];
    
    for (int i = 0; i < a; i++)
    {
        cout<<"Enter array values";
        cin>>arr[i];
    }

    int c = a*b;
    int sum=0;
    for (int j = 0; j < a; j++)
    {
        sum += arr[j];
        if (sum>=c)
        {
            
            cout<<sum<<endl;
            cout<<j;
            break;
        } 
        
    
    

    }
    
    

    
}


// #include <iostream>

// using namespace std;

// int main()
// {
//     int a, b;
//     cin>>a>>b;
//     int arr[a];
//     int sum=0;
    
//     for (int i = 0; i < a; i++)
//     {
//         cin>>arr[i];
//     }

//     int prod = a*b;
    
//     for(int i=0; i<a; i++){
//         sum = sum + arr[i];
//         if(sum >= prod){
//             cout<<"total sum: "<<sum<<endl;
//             cout<<"at i indes "<<i<<"stopped";
//             break;
//         }
//     }

// }