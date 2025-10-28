#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    ofstream mano;
    mano.open("ram01.txt", ios::out|ios::ate);
    cout<<mano.tellp();
    mano<<"ramjan";
    cout<<endl;
    cout<<mano.tellp();
    mano.seekp(2);
    mano<<'n';
    cout<<endl;
    cout<<mano.tellp();
    return 0;
}