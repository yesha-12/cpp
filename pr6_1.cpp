#include <iostream>
#include <iomanip>
using namespace std;
class shape
{
    private:
        float radius;

    public:
        void setradius(float r)
        {
            if(r>=0)
                radius=r;
            else
                radius=0;
        }

        float getradius()
        {
            return radius;
        }
};


class circle:public shape
    {
        public:
        float area()
        {
            return 3.14*getradius()*getradius();
        }

        float perameter()
        {
            return 2*3.14*getradius();
        }
    };

    int main()
    {
        int n;
        cout<<"enter the number of circle:";
        cin>>n;
        circle* c=new circle[n];

        for(int i=0;i<n;i++)
        {
            float r;
            cout<<"enter the value of radius"<<i+1<<":";
            cin>>r;
            c[i].setradius(r);
        }

        cout << "\n--- Circle Data ---\n";
        cout << setw(10) << "Radius"
             << setw(15) << "Area"
             << setw(20) << "perameter" << endl;

    for (int i = 0; i < n; i++)
        {
        cout << setw(10) << c[i].getradius()
             << setw(15) << c[i].area()
             << setw(20) << c[i].perameter()
             << endl;
        }
    delete[] c;

        return 0;
    }
