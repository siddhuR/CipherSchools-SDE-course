#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string, int> hash;

    hash["siddhu"] = 1;
    hash["Programming"] = 2;
    hash["routhu"] = 3;

    cout<<"The value of siddhu in the hashtable is "<<hash["routhu"]<<endl;

    for(auto j = hash.begin(); j!=hash.end();j++) {
        cout<<"The key will be"<<j->first<<"The value in the key will be "<<j->second<<endl;
    }
}