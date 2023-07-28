#include <iostream>
#include <sstream>
using namespace std;

class Student
{
    int age,standard;
    char a[10];
    char b[10];
    public:
    void get_value();
    void show_value();
};
void Student:: get_value()
{
    cin>>age>>standard;
    cin>>a>>b;
}
void Student :: show_value()
{
    cout<<age<<"\n"<<b<<","<<a<<"\n"<<standard<<endl;
    cout<<age<<","<<a<<","<<b<<","<<standard<<endl;
}
int main()
{
    Student s;
    s.get_value();
    s.show_value();
    return 0;
}
