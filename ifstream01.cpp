#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

int main()
{
    char ch;
    ifstream mano;
    mano.open("ram01.txt");
    while(!mano.eof())
    {
        mano>>ch;
        putch(ch);
    }
    cout<<endl;
    mano.close();
    ifstream mano2;
    mano2.open("ram01.txt");
    mano2.seekg(6);
    mano2.seekg(1, ios_base::cur);
    while(!mano2.eof())
    {
        mano2>>ch;
        putch(ch);
    }
    return 0;
}