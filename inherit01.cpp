#include<iostream>

class mano
{
    private:
    int b=12;
    protected:
    int c=110;
    void show_name()
    {
        std::cout<<b<<std::endl;
        std::cout<<"my name is manoranjan"<<std::endl;
    }
    public:
    int a=11;
    void show()
    {
        std::cout<<b<<std::endl;
        // c=49;
        // std::cout<<"value:"<<c<<std::endl;
        // std::cout<<"hello world"<<std::endl;
    }
};

class ram:protected mano
{
    public:
    void access()
    {
        show_name();
        std::cout<<"value at private a from base class:"<<c<<std::endl<<a<<std::endl;
        // std::cout<<"value of public a from base class"<<a<<std::endl;
        // show();
        // std::cout<<"value of protected c from base class:"<<c<<std::endl;
    }
};

int main()
{
    mano m1;
    // m1.show_name(): show_name is protected
    // m1.c=59; c is protected
    // m1.show();
    ram r1;
    // r1.show(); show() is private in the child class
    r1.access();
    // r1.show();
    // r1.show_name();
    return 0;
}