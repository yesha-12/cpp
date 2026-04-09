#include<iostream>
using namespace std;
class ATM
{
    private:
    int pin;
    int balance;

    public:
    ATM()
    {
      pin=1234;
      balance=5000;
    }

    bool login()
    {
        int enterpin,attemps=0;
        while(attemps<3){
            cout<<"\nEnter pin:";
            cin>>enterpin;

            if (enterpin==pin){
                cout<<"\nlogin succesfully!!";
                return true;
            }
            else{
                cout<<"\nwrong pin !!";
                attemps++;
            }
         
        }
        cout<<"\ncard block";
            return false;
    }
    void checkbalance(){
        cout<<"Balance:"<<balance<<endl;
    }

    void deposit(){
        int amount;
        cout<<"\nEnter the deposit amount:";
        cin>>amount;

        balance+=amount;

        cout<<"\nAmount deposit!!";

    }
    void withdraw(){
        int amount;
        cout<<"Enter amount:";
        cin>>amount;
         if(amount<=balance&& balance-amount>=500){
            balance-=amount;
            cout<<"\nplz collect cash!!";
         }
         else{
            cout<<"\nInsufficient balance or minimum balance required!";
         }
    }
    void changepin(){
        int oldpin,newpin;
        cout<<"Enter oldpin:";
        cin>>oldpin;

        if(oldpin==pin){
            cout<<"Enter newpin:";
            cin>>newpin;
            pin=newpin;

            cout<<"\npin change succesfully!";

        }
        else{
            cout<<"\nWrong pin";
        }
    }

    void menu(){
        int choice;

        do{
            cout<<"\n----ATM menu----\n";
            cout<<"1.checkbalance()\n";
            cout<<"2.deposit\n";
            cout<<"3.withdraw\n";
            cout<<"4.changepin\n";
            cout<<"5.exit\n";

            cout<<"Enter choice:\n";
            cin>>choice;

            switch(choice)
            {
                case 1:checkbalance();break;
                case 2:deposit();break;
                case 3:withdraw();break;
                case 4:changepin();break;
                case 5:cout<<"Thankyou for using ATM!!\n";break;   
                default:cout<<"Invalid choice!!";
            }
        }while(choice!=5);
    }

};

int main()
{
    ATM person1;
    if(person1.login()){
        person1.menu();
    }
    return 0;
}