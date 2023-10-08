#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int *arr;
    arr = new int[5];

    delete arr;

    // A vctor is an array whose size is not fixed will allocate space verytume you add a new element to it.

    vector<int> a;

    cout << "The size of the vector is " <<a.size() << endl;

    int i;
    for(i=0;i<5;i++) {
        a.push_back(i+1);
    }

    cout << "The size of the vector is " <<a.size() << endl;

    a.pop_back();

    cout << "The size of the vector is " <<a.size() << endl;

    cout<<"The first element of the vector is"<<a[0];
    
    for (auto j=a.begin();j!=a.end();j++)
    {
        cout<<*j<<endl;
    }

    cout <<"The capacity of the Vector is"<<a.capacity() << endl;


}