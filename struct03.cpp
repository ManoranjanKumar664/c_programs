#include<iostream>
using namespace std;
#include<string.h>

struct student
{
    int sclass;
    int rollno;
};
student s3;

int main()
{
    student s1, s2;
    s1.rollno=34;
    s1.sclass=9;
    s2=s1;
    s3=s2;
    cout<<"student roll and class at s2:"<<s2.rollno<<" "<<s2.sclass<<endl;
    /* 
    // name n2;
    strcpy(n1.ch,"ram");
    cout<<"name at n1:";
    cout<<n1.ch<<endl;
    n2=n1;
    cout<<"name at n2:"<<n2.ch<<endl;
    strcpy(n2.ch,"sita");
    cout<<"name at n2 again:"<<n2.ch; */
    return 0;
}