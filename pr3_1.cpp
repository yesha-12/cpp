#include<iostream>
using namespace std;
class employee
{
    string name;
    double basicsalary;
    double bonusamt;

public:
    employee()
    {
        name="none";

        basicsalary=0;
        bonusamt=0;
    }

    employee(string n,double bs,double boa)
    {
        name=n;
        if(bs<0)bs=0;
        if(boa<0)boa=0;
        bonusamt=boa;
        basicsalary=bs;
    }
    inline double totalsalary()
    {
        return basicsalary+bonusamt;
    }
    void updatebonus(double newbonus)
    {
        if(newbonus >= 0)
            bonusamt=newbonus;

    }
    void disply()
    {
        cout<<"name:"<<name<<endl;
        cout<<"basic salary:"<<basicsalary<<endl;
        cout<<"bonus amount:"<<bonusamt<<endl;
        cout<<"total salary:"<<totalsalary()<<endl;

        if(totalsalary() >= 50000)
            cout<<"grade a";
         else if(totalsalary() >= 30000)
            cout<<"grade b";
        else
            cout<<"grade c";
    }
    };

    int main()
    {
       int n =5;
       employee* emp=new employee[n]
       {
           employee("yesha",56000,7800),
           employee("riya",58000,7000),
           employee("janvi",45000,3000),
           employee("rudri",89000,8900),
           employee("dhruvi",34000,-3000)
       };
       for(int i=0;i<n;i++)
       {
           emp[i].disply();

       }
       delete[] emp;
        return 0;
    }
