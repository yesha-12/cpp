#include<iostream>
#include<cmath>
using namespace std;

class negativenumberexpation
{
public:
    void message() const
    {
        cout << "Error: Negative number not allowed for square root!\n";
    }
};

int main()
{
    float num;
    cout<<"enter the number:";
    cin>>num;
    try
    {
        if (num<0)
        {
            throw negativenumberexpation();
        }
        cout << "Square Root = " << sqrt(num) << endl;
    }
    catch(const negativenumberexpation& e)
    {
        e.message();   
    }
    
    return 0;
}