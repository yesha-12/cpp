#include<iostream>
using namespace std;

class wallet
   {
       int walletid;
       string uname;
       double currentbalance;

public:        wallet()
       {
           walletid=0;
           uname="none";
           currentbalance=0;
       }

       wallet(int wi,string un,double cb)
       {
           walletid=wi;
           uname=un;
           currentbalance=cb;

       }

       void loadmoney(double amt)
       {
           currentbalance+=amt;
       }

       void transfermoney(wallet &reciver,double amt)
       {
           if(currentbalance>amt)
           {
               currentbalance-=amt;
               reciver.currentbalance+=amt;
           }
           else
           {
               cout<<"error : insufficient balance"<<endl;
           }
       }
       void displaywallet(){
       cout<<"walletid"<<walletid;
           cout<<"user name "<<uname;
           cout<<"current balance"<<currentbalance;
           }
   };

   int main()
   {
     wallet w1(101,"yesha",40000);
     wallet w2(102,"nenca",6000);

     w1.loadmoney(3000);
     w1.transfermoney(w2,700);
     
     w1.displaywallet();
cout<<endl;

     w2.displaywallet();
     cout<<endl;

     cout<<"25cs032";
       return 0;
   }
