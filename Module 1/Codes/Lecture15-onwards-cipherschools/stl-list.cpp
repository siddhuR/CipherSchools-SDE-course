#include<iostream>
#include<list>
using namespace std;

int main()
{
    list<int> a;

    a.push_back(4);
    a.push_front(2);
    a.push_back(3);
    a.push_front(2);

    a.pop_back();
    a.pop_front();

    a.sort();

    for(auto i = a.begin(); i != a.end();i++) {
        cout<<*i<<endl;
    }
}