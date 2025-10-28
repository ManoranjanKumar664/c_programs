#include<iostream>
using namespace std;

class mano
{
    private:
    int a, b;
    public:
    void put(int x, int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<a<<" "<<b<<endl;
    }
    mano operator+(mano e)
    {
        mano temp;
        temp.a=a+e.a;
        temp.b=b+e.b;
        return temp;
    }
    friend ostream& operator<<(ostream &mm, mano m2);
    friend istream& operator>>(istream &m2, mano &m3);
};

ostream& operator<<(ostream &mm, mano m2)
{
    mm<<m2.a<<" "<<m2.b<<endl;
    // mm<<m2.b<<endl;
    return mm;
}
istream& operator>>(istream &im, mano &m3)
{
    im>>m3.a;
    im>>m3.b;
    return im;
}

int main()
{
    mano m1, m2, m3;
    m1.put(13, 44);
    // m2.put(14, 45);
    cin>>m2;
    m3=m1+m2;
    // m3.show();
    cout<<m3;
    cout<<m2;
    return 0;
}