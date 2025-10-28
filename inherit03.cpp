#include<iostream>
// using
class mano
{
    private:
    int a=90;
    public:
    mano(int k)
    {
        a=k;
        std::cout<<a<<std::endl;
    }
};

class mano2:public mano
{
    private:
    int b;
    public:
    mano2(int r, int s):mano(s)
    {
        b=r;
        std::cout<<"value at b:"<<b<<std::endl;
        // b=449;
    }
    mano2(mano2 &mm):mano(mm)
    {
        b=mm.b;
    }
};

int main()
{
    mano2 m21(101, 102);
    mano2 mr1(39, 40);
    mano2 mr2(mr1);
    // m21.show();
    return 0;
}