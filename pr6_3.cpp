#include<iostream>
#include<string>
using namespace std;

class fuel
{
    protected:
    string fueltype;
public:
fuel(string f)
 {
    fueltype=f;
 }
};

class brand
{
    protected:
    string brandname;

    public:
    brand(string b)
    {
        brandname=b;
    }
};

class car:public fuel,public brand{
    public:
    car(string f,string b):fuel(f),brand(b){}

    void display()
    {
        cout<<"Fuel :"<<fueltype;
        cout<<"Brand:"<<brandname;
    }
};

int main()
{
    car c1("petrol","tesla");
    c1.display();
    return 0;
}
