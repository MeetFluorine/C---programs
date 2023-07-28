#include<iostream>
using namespace std;
class student
{
    int data;
    char name[50];
    float salary;
    public:
    void get_data();
    void show_data();
};
void student::get_data()
{
    cout<<endl<<"enter id no.:-";
    cin>>data;
    cout<<endl<<"enter name:-";
    cin>>name;
    cout<<endl<<"enter salary:-";
    cin>>salary;
}
void student::show_data()
{
    cout<<endl<<"id no.:-"<<data<<endl<<"name:-"<<name<<endl<<"salary="<<salary;
}
int main()
{
    student s[100];
    int n,i;
    cout<<"enter the number of student:-";
    cin>>n;
    for(i=0;i<n;i++)
    {
        s[i].get_data();
    }
    for(i=0;i<n;i++)
    {
        cout<<endl<<"detail of employee("<<i+1<<")="<<endl;
        s[i].show_data();
    }
    return 0;
}