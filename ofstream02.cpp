#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

int main()
{
    char ch;
    ifstream mano;
    mano.open("ram01.txt");
    cout<<mano.tellg();
    cout<<endl;
    mano>>ch;
    cout<<ch;
    cout<<endl;
    cout<<mano.tellg();
    return 0;
}