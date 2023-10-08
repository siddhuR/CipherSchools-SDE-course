#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> a;

    a.push(5);
    a.push(6);
    a.push(7);

    cout<<a.top()<<endl;

    a.pop();

    cout<<a.top()<<endl;
    if(a.empty()==0)
    {
        cout<<"The stack is currently not empty";
    }
    else {
        cout<<"The stack is empty";
    }

    a.pop();
    a.pop();
    
    if(a.empty()==0)
    {
        cout<<"The stack is currently not empty";
    }
    else {
        cout<<"The stack is empty";
    }


}