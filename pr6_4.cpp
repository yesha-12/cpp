#include<iostream>
using namespace std;
class account
{
    protected:

    int accno;
    int currentbalance;

    public:

    account(int a, int b)
    {
        accno=a;
        currentbalance=b;

    }

    void withdraw(int amount)
    {
        cout<<"Enter amount :";
        cin>>amount;
        
    }

};

class saving_account:public account
{
    void withdarw()
    {
        account ::withdraw;
        if(amount<=currentbalance){
            currentbalance-=amount;
        }
    }
};
class current_account:public account
{
 void withdarw()
    {
        account ::withdraw;
        if(amount+500000<=currentbalance){
            currentbalance-=amount;
        }
};

