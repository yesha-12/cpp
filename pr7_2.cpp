#include<iostream>
using namespace std;
class complex
{
    private:
    int real,image;
    public:
    complex ()
    {
        real=0;
        image=0;
    }
    complex(int r,int i)
    {
        real=r;
        image=i;

    }
    complex operator+(complex c)
    {
        complex temp;
        temp.real=real+c.real;
        temp.image=image+c.image;
        return temp;
    }
     complex operator-(complex c)
    {
        complex temp;
        temp.real=real-c.real;
        temp.image=image-c.image;
        return temp;
    }

    void display()
    {
        cout<<real<<"+"<<image<<"i"<<endl;
    }
};
int main()
{
    complex c1(3,4),c2(4,5);
    complex c3 = c1+c2;
    complex c4 = c2-c1;

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Addition Result: ";
    c3.display();

    cout << "Subtraction Result: ";
    c4.display();
    cout<<"25cs032";    
    return 0;
}