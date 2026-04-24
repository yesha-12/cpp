#include<iostream>
using namespace std;

int main()
{
    int a, b;

    try
    {
        cout << "Enter two integers: ";

        if(!(cin >> a >> b))   
        {
            throw "Invalid Input! Only integers allowed.";
        }

        if(b == 0)             
        {
            throw "Division by zero error!";
        }

        cout << "Result = " << a / b << endl;  
    }
    catch(const char* msg)
    {
        cout << "Error: " << msg << endl;
    }

    return 0;
}