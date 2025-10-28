#include<iostream>
using namespace std;

class mano
{
    private:
    int a, b;
    public:

    void show()
    {
        cout<<a<<" "<<b<<endl;
    }

    void take(int x, int y)
    {
        a=x;
        b=y;
    }
    friend ostream& operator<<(ostream &os, mano mm);
    friend istream& operator>>(istream &iob, mano &mob);
};

ostream& operator<<(ostream &os, mano mss)
{
    os<<mss.a<<endl;
    os<<mss.b<<endl;
    return os;
}

istream& operator>>(istream &iob, mano &mob)
{
    iob>>mob.a;
    iob>>mob.b;
    return iob;
}

int main()
{
    mano m1, m2;
    cout<<"enter m1.a and m1.b:"<<endl;
    cin>>m1;
    cout<<m1;
    return 0;
}