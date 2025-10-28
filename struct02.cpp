#include<iostream>
using namespace std;
struct employee
{
    private:
    int emp_id;
    char emp_name[50];
    char emp_job_title[50];
    int dep_id;
    int emp_email;
    int phone_no;

    public:
    void input()
    {
        cout<<"enter employee id"<<endl;
        cin>>emp_id;
        cout<<"enter employee name"<<endl;
        cin>>emp_name;
        cout<<"enter employee job title"<<endl;
        cin>>emp_job_title;
        cout<<"enter department id"<<endl;
        cin>>dep_id;
        cout<<"enter employee e-mail"<<endl;
        cin>>emp_email;
        cout<<"enter the phone no."<<endl;
        cin>>phone_no;
        }
};

int main()
{
    employee e1;
    e1.input();
    return 0;
}