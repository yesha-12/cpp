#include<iostream>
using namespace std;

class book
{
   private:int id;
   string title;
   string author;
   int copies;

public:
   book(int i, string t, string a,int c)

   {
       id=i;
       title=t;
       author=a;
       copies=c;

   }

   void issubook()
   {
       if(copies>0)
       {
           copies--;
           cout<<"book issued";
       }
       else
       {
           cout<<"no copies available";

       }
   }
   void returnbook()
   {
       copies++;
       cout<<"return book";
   }
   void display()
   {
       cout<<id<<title<<author<<copies;
   }
};
int main()
{
   book b1(1,"c++","abc",5);
   b1.display();
   b1.issubook();
   b1.returnbook();
   return 0;
}