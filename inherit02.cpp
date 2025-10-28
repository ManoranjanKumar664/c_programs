#include<iostream>

class mano
{
    private:
        int a=49;
    protected:
        int b=10;
    public:
        void show()
        {
            std::cout<<a<<std::endl;
        }
};
class ranjan:private mano
{
    private:
    
    public:
    void put()
    {
        show();
        // std::cout<<a<<std::endl;
    }
};

int main()
{
    ranjan r1;
    // std::cout<<m1.b<<std::endl;
    // m1.show();
    r1.put();
    return 0;
}