#include<iostream>
using namespace std;

class Coordinate
{
    public:

    float a;
    float b;
    float c;

    public:

    Coordinate operator+(Coordinate const & obj)
    {
        Coordinate z;

        z.a = this->a + obj.a;
        z.b = this->b + obj.b;

        return z;
    }

    void sqdistancefromcordinate(float a)
    {
        float dist;

        dist = (this->a-a)*(this->a-a);
        cout<<dist;
    }

    void sqdistancefromcordinate(float a, float b)
    {
        float dist;

        dist = (this->a-a)*(this->a-a) + (this->b-b)*(this->b-b);

        cout<<dist;
    }

    void sqdistancefromcordinate(float a, float b, float c)
    {
        float dist;

        dist = (this->a-a)*(this->a-a) + (this->b-b)*(this->b-b) + (this->c-c)*(this->c-c);

        cout<<dist;
    }
};



int main()
{
    Coordinate x;

    x.a = 3;
    x.b = 4;
    //x.c = 5;

    Coordinate y;

    y.a = 5;
    y.b = 6;

    Coordinate z;
    z = x+y;

    //x.sqdistancefromcordinate(0,0);

    cout<<"The coordinates after addition are "<<z.a<<" "<<z.b;

    return 0;

}