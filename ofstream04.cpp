#include<fstream>
#include<iostream>
using namespace std;
void fun();
void fun(ofstream &ram)
{
    ram<<"manoranjan baskey";
}

int main()
{
    ofstream mm;
    mm.open("ram01.txt", ios::app);
    fun(mm);
    fun(mm);
    fun(mm);
    mm.close();
    return 0;
}