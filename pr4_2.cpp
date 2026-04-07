#include<iostream>
using namespace std;

class point
{
    public:
    int x;
    int y;

    int getx()
    {
        return this->x;
    }

    int gety()
    {
        return this->y;
    }

    point &move(int dx,int dy)
    {
    this->x+=dx;
    this->y+=dy;

    return *this;
    }

    void reset()
    {
        move(-getx(),-gety());
    }
};
int main()
{
    point p;
    
    p.x = 5;
    p.y = 7;

    p.move(2, 3).move(6,5);   
         

    cout << "x: " << p.getx() << endl;
    cout << "y: " << p.gety() << endl;

    p.reset();
    cout << "x: " << p.getx() << endl;
    cout << "y: " << p.gety() << endl;

    return 0;
}