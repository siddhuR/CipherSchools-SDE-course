#include<iostream>
#include<string>
using namespace std;

int main()
{
    /* string a;
    string b;

    cin>>a>>b;

    cout<<"The string which you have given as input are "<<a<<b<<endl;

    string c;

    c=a+" "+b;  //This is called string concatenation

    cout<<"The combined word is : "<<c;
    cout<<"The length of combined name is "<<c.length();

    return 0; */

    string a;
    string b;
    string c;
    
    //cin>>a;
    getline(cin,a);     // getline is a function which is why you can see (), (cin, variable where you want to store the value of the line which is being taken as input)

    cout<<"Your full name is: "<<a<<endl;

    

    // c=a+" "+b;  //This is called string concatenation

    // cout<<"The combined word is : "<<c;
    // cout<<"The length of combined name is "<<c.length();

    return 0;
}