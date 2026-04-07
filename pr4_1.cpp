#include<iostream>
using namespace std;
class Dynamic{
    int size;
    int capacity;
    int *data;
    public:
    Dynamic()
    {
     size=0;
    capacity=0;
     data=nullptr; 
    }
    void Insert(int x)
    {
        if(capacity==size){
        resize();}
       
        data[size++]=x;
    }
    void resize()
    {
        if(capacity==0){
        capacity=1;}
        else{
        capacity=capacity*2;
}
        int *newData=new int[capacity];

        for(int i=0;i<size;i++)
        {
            newData[i]=data[i];
        }
        delete []data;
        data=newData;
    }
    void display()
    {
        for(int i=0;i<size;i++)
        {
            cout<<data[i];
        }
    }
    void Delete(int y)
    {
        cout<<"\nafter delete an element\n";
        for(int i=y-1;i<size-1;i++)
        {
            data[i]=data[i+1];
        }
        size--;

    }
};


int main(){
    Dynamic d;
    d.Insert(4);
    d.Insert(5);
    d.Insert(6);
    d.display();
    d.Delete(2);
     d.display();

     cout<<"\n25cs032";
   
return 0;
}