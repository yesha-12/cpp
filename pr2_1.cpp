
#include<iostream>
using namespace std;

class item
{
  private:
   static int id;
   int itemid;
   string name;
   int price;
   int qty;

  public:
   item(string n,int p,int q)
   {
       itemid=++id;
       name=n;
       price=p;
       qty=q;

   }

   void restock(int amt)
   {
       qty+=amt;
   }

   void sell(int amt)
   {
       if(amt<=qty)
       {
           qty-=amt;
       }
       else{
           cout<<"not enough stock";
       }
   }
   void display()
   {
       cout<<itemid<<name<<price<<qty;
   }
};
int item::id=0;

int main()
{
   item i1[3] ={item("laptop",50000,15),item("iphon",300000,5),item("ipad",500000,10)};
   i1[0].sell(3);
   i1[1].restock(5);

   for (int i=0;i<3;i++){
       cout<<"\nitem"<<i+1<<endl;
       i1[i].display();
   }
   return 0;
}