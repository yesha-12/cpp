#include<iostream>
using namespace std;
class cal
{
    public:
    int add(int a,int b)
    {
        return a+b;
    }
     int add(int a,int b,int c)
    {
        return a+b+c;
    }
    float add(float a,float b)
    {
        return a+b;
    }
    float add(float a,int b)
    {
        return a+b;
    }
};
int main ()
{
    cal c;
    int r1=c.add(3,4);
    int r2=c.add(3,4,5);
    float r3=c.add(3.5f,6.7f);
    float r4=c.add(3.2f,4);
    cout<<"both int:"<<r1<<"\nthree int:"<<  r2<<"\nboth float:"<< r3<< "\none int one float :"<<r4;
    cout<<"25cs032";    
    return 0;
}