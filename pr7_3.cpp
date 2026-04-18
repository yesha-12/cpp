#include<iostream>
using namespace std;
class cel
{
    float temp;
    public:
    cel(){}
    cel(float t)
    {
        temp=t;
    }
    void display()
    {
        cout<<temp<<"celsius";
    }

    float fahren1()
    {
        
    return (temp*9.0/5.0+32);
}
    bool operator==(cel c)
    {
        return temp==c.temp;

    }

    float gettemp(){return temp;}
};

class fahren
{
    float temp;
    public:
    fahren(){}
    fahren(float t)
    {
        temp=t;
    }
    void display()
    {
        cout<<temp<<"fahrenheit";
    }
   
    float cel1()
   {
        return ((temp-32)*5.0/9.0);
   }
    bool operator==(fahren f)
    {
        return temp==f.temp;

    }

    float gettemp(){return temp;}
};


int main()
{
    // int n;
    // cout<<"enter no of temp:";
    // cin>>n;
    // cel c[10];
    // fahren f[10];

    // cout<<"enter value of cel:";
    // for(int i=0;i<n;i++)
    // {
    //     float t;
    //     cin>>t;
    //     c[i]=cel(t);
    // }

    // // cout<<"cel to fahren:";
    // // for(int i=0;i<n;i++)
    // // {
    // //     f[i]=c[i];
    // //     c[i].display();
    // //     cout<<"=";
    // //     f[i].display();
    // //     cout<<endl;
    // // }

    // if(c[0] == c[1])
    //     cout << "\nFirst two Celsius values are equal\n";
    // else
    //     cout << "\nFirst two Celsius values are NOT equal\n";
    // return 0;
    cel c1(2),c2(2);
    cout<<c1.fahren1()<<endl;
    cout<<(c1==c2);
}