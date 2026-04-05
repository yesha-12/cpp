#include<iostream>
using namespace std;

class student{
    int roll_no;
    string name;
    int m1,m2,m3;

public:
    student (string x,int r,int a, int b, int c){
        name=x;
        roll_no=r;
        m1=a;
        m2=b;
        m3=c;
    }

    student(){
        name="None";
        roll_no=0;
        m1=0;
        m2=0;
        m3=0;
    }

    void average()
    {
       int avg=(m1+m2+m3)/3;
       cout<<"average marks of three subject:"<<avg<<endl;
    }
};

int main(){
    string name;
    int r,a,b,c;

    student *s = new student[2]; 

    for(int i=0;i<2;i++)
    {
        cin>>name>>r>>a>>b>>c;
        s[i] = student(name,r,a,b,c);
        s[i].average();
    }
    cout<<"\n25cs032";

    delete[] s; 

    return 0;
}