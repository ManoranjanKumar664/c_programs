#include<iostream>
using namespace std;

class mano
{
    private:
    int *p=new int;
    public:
    void show()
    {
        cout<<"mano"<<endl;
    }
    ~mano()
    {
        if(p!=nullptr)
        {
            cout<<"value:"<<*p<<endl;
            delete p;
        }
        cout<<*p<<endl;
    }
};
void sum();

int main()
{
    sum();
    return 0;
}

void sum()
{
    mano m1;
    m1.show();
}

/* class mano2:public mano
{
    int b;
    int *q=new int;
    public:
    void show2()
    {
        cout<<"hell"<<endl;
    }
    mano2(int s)
    {
        b=s;
    }
    void show_b()
    {
        cout<<"value at b:"<<b<<endl;
    }
    ~mano2()
    {
        delete q;
        cout<<"value pointer points:"<<*q<<endl;
        cout<<"mano2 constructor deleted"<<endl;
    }
};
void sum(int f, int g);
int main()
{
    sum(12, 24);
    return 0;
}

void sum(int f, int g)
{
    int h=f+g;
    cout<<"sum="<<h<<endl;
    mano2 m1(44);
    m1.show_b();
} */