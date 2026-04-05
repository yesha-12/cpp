#include<iostream>
#include<string>
using namespace std;
class person
{
protected:
    string name;
    int age;
public:
    person(string n,int a)
    {
       name=n;
       age=a;
    }

    void displayperson()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
};
class employee:public person
{
protected:
    int empid;
public:
    employee(string n,int a,int id):person(n,a)
    {
        empid=id;
    }

    void displayemployee()
    {
        displayperson();
        cout<<"Empid:"<<empid<<endl;


    }
};

class manager:public employee
{
protected:
    string dept;
public:
    manager() : employee("", 0, 0) {
    dept= "";
}
    manager(string n,int a,int id,string d):employee(n,a,id)
    {
       dept=d;
    }

    void displaymanager()
    {
        displayemployee();
        cout<<"department:"<<dept<<endl;


    }

    int getid()
    {
        return empid;
    }
};

int main()
{
    int n,searchid;
    cout<<"enter value of manager:";
    cin>>n;


    manager* m=new manager[n];
     string name,dept;
    int age,empid;


    for(int i=0;i<n;i++)
    {
        cout<<"entermanager detailes"<<i+1<<endl;
        cout<<"name";
        cin>>name;
        cout<<"age";
        cin>>age;
        cout<<"empid";
        cin>>empid;
        cout<<"department";
        cin>>dept;

        m[i]=manager(name,age,empid,dept);
    }
    cout<<"all manager detailes"<<endl;
    for(int i=0;i<n;i++)
    {
        m[i].displaymanager();
    }

    cout<<"enter empid to search:"<<endl;
    cin>>searchid;

    for(int i=0;i<n;i++)
    {
        if(m[i].getid()==searchid)
        {
          cout<<"manager found!!"<<endl;
            m[i].displaymanager();

            delete[] m;

            return 0;
        }

    }
    cout<<"manager not found!!"<<endl;
        delete[] m;

    return 0;
}
