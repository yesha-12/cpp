#include <iostream>
using namespace std;

class Employee {
private:
    int empID;
    string name;
    string department;
    static int totalEmployees;   // Static variable

public:
    Employee(int id, string n, string d) {
        empID = id;
        name = n;
        department = d;
        totalEmployees++;        // Increase count when object is created
    }

    void display() {
        cout << "ID: " << empID << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
    }

    static void showTotalEmployees() {
        cout << "Total Employees: " << totalEmployees << endl;
    }
};

int Employee::totalEmployees = 0;

int main() {
    Employee e1(101,"Rahul","HR");
    Employee e2(102,"Amit","IT");
    Employee e3(103,"Priya","Finance");

    Employee::showTotalEmployees();

    return 0;
}

//#include<iostream>
//using namespace std;
//
//class wallet
//    {
//        int walletid;
//        string uname;
//        double currentbalance;
//
//public:        wallet()
//        {
//            walletid=0;
//            uname="none";
//            currentbalance=0;
//        }
//
//        wallet(int wi,string un,double cb)
//        {
//            walletid=wi;
//            uname=un;
//            currentbalance=cb;
//
//        }
//
//        void loadmoney(double amt)
//        {
//            currentbalance+=amt;
//        }
//
//        void transfermoney(wallet &reciver,double amt)
//        {
//            if(currentbalance>amt)
//            {
//                currentbalance-=amt;
//                reciver.currentbalance+=amt;
//            }
//            else
//            {
//                cout<<"error : insufficient balance"<<endl;
//            }
//        }
//        void displaywallet(){
//        cout<<"walletid"<<walletid;
//            cout<<"user name "<<uname;
//            cout<<"current balance"<<currentbalance;
//            }
//    };
//
//    int main()
//    {
//      wallet w1(101,"yesha",40000);
//      wallet w2(102,"nenca",6000);
//
//      w1.loadmoney(3000);
//      w1.transfermoney(w2,700);
//      w1.displaywallet();
//      w2.displaywallet();
//        return 0;
//    }
//#include<iostream>
//using namespace std;
//
//class book
//{
//    private:int id;
//    string title;
//    string author;
//    int copies;
//
//public:
//    book(int i, string t, string a,int c)
//
//    {
//        id=i;
//        title=t;
//        author=a;
//        copies=c;
//
//    }
//
//    void issubook()
//    {
//        if(copies>0)
//        {
//            copies--;
//            cout<<"book issued";
//        }
//        else
//        {
//            cout<<"no copies available";
//
//        }
//    }
//    void returnbook()
//    {
//        copies++;
//        cout<<"return book";
//    }
//    void display()
//    {
//        cout<<id<<title<<author<<copies;
//    }
//};
//int main()
//{
//    book b1(1,"oops","deec",5);
//    b1.display();
//    b1.issubook();
//    b1.returnbook();
//    return 0;
//}
//#include <iostream>
//using namespace std;
//
//class Rectangle {
//private:
//    double length;
//    double width;
//
//public:
//    void setDimensions(double l, double w) {
//        if(l > 0 && w > 0) {
//            length = l;
//            width = w;
//        } else {
//            cout << "Invalid dimensions\n";
//        }
//    }
//
//    double area() {
//        return length * width;
//    }
//
//    double perimeter() {
//        return 2 * (length + width);
//    }
//
//    bool isSquare() {
//        return length == width;
//    }
//
//    void display() {
//        cout << "Length: " << length << endl;
//        cout << "Width: " << width << endl;
//        cout << "Area: " << area() << endl;
//        cout << "Perimeter: " << perimeter() << endl;
//
//        if(isSquare())
//            cout << "This rectangle is a Square\n";
//    }
//};
//
//int main() {
//
//    Rectangle r[2];
//
//    r[0].setDimensions(10,5);
//    r[1].setDimensions(8,8);
//
//    for(int i=0;i<2;i++) {
//        cout << "\nRectangle " << i+1 << endl;
//        r[i].display();
//    }
//}

//#include<iostream>
//using namespace std;
//
//class item
//{
//   private:
//    static int id;
//    int itemid;
//    string name;
//    int price;
//    int qty;
//
//   public:
//    item(string n,int p,int q)
//    {
//        itemid=++id;
//        name=n;
//        price=p;
//        qty=q;
//
//    }
//
//    void restock(int amt)
//    {
//        qty+=amt;
//    }
//
//    void sell(int amt)
//    {
//        if(amt<=qty)
//        {
//            qty-=amt;
//        }
//        else{
//            cout<<"not enough stock";
//        }
//    }
//    void display()
//    {
//        cout<<itemid<<name<<price<<qty;
//    }
//};
//int item::id=0;
//
//int main()
//{
//    item i1[3] ={item("laptop",50000,15),item("iphon",300000,5),item("ipad",500000,10)};
//    i1[0].sell(3);
//    i1[1].restock(5);
//
//    for (int i=0;i<3;i++){
//        cout<<"\nitem"<<i+1<<endl;
//        i1[i].display();
//    }
//    return 0;
//}

//int n=5;
//employee* emp=new employee[]{
//for(int i=0;i<n;i++)
//    emp[1].disply();
//}








