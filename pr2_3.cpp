
#include <iostream>
#include <string>
using namespace std;

class BankSystem {
   string name;
   int account_id;
   int balance;

public:
BankSystem(){
       name="none";  
       account_id=0;
       balance=0;
   }
   BankSystem(string n,int id,int b){
       name=n;  
       account_id=id;
       balance=b;
   }
  int DipositeMoney(int m){
    balance+=m;
    cout<<"available money after diposite="<<balance<<endl;


   }
   int WithdrawMoney(int m){
     if (m > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= m;
            cout << "Available balance after withdrawal = " << balance << endl;
        } }
void display(){
cout<<"name="<<name<<endl;
cout<<"account id="<<account_id<<endl;
cout<<"available balance="<<balance<<endl;

}
};

int main(){
   
    int n,id,balance;
    string name,choice;
    cout<<"enter the number of account=";
    cin>>n;
     BankSystem *s=new BankSystem[n];
    for(int i=0;i<n;i++)
    {
        cin>>name>>id>>balance;
        s[i]=BankSystem(name,id,balance);
        cout<<"do you want to diposite money=";
        cin>>choice;
        if(choice=="yes")
        {
            int a;
            cout<<"enter the number of amount you want to deposite=";
            cin>>a;
            s[i].DipositeMoney(a);

        }
        
        cout<<"do you want to withdrow money=";
        cin>>choice;
        if(choice=="yes")
        {
            int a;
            cout<<"enter the number of amount you want to withdraw=";
            cin>>a;
            s[i].WithdrawMoney(a);
        }
        
         
    }
   for (int i = 0; i < n; i++) {
  
        s[i].display();
    }


    cout<<"25cs032";
    return 0;
}
