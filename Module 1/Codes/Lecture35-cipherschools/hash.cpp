#include<iostream>
using namespace std;

int main() {
    string text;
    text="Hi guys, how are you! which movie did you watch in the recent times";

    //This is how you transverse the string

    // cout<<text[0]<<endl;
    // cout<<text[1]<<endl;
    // cout<<text[2]<<endl;
    // cout<<text[3]<<endl;

    int freq[26];
    int i;

    for(i=0;i<26;i++) freq[i]=0;

    for(i=0;i<text.length();i++)
    {
        if(text[i]!=' ')
        {
            // if(text[i]=='a') freq[0]++
            freq[text[i]-'a']++;
        }
    }

    char temp;
    int max;

    for(i=0, temp='a', max=0; i<26; i++)
    {
        cout<<"The frequency of the character "<<temp<<" is "<<freq[i];
        temp++;

        if(freq[i]>max) max = freq[i];
    }

    cout<<endl<<endl<<"The letter with maximum frequency is "<<max;

    return 0;

}