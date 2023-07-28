#include<iostream>
using namespace std;
class base
{
    int x, y;
    public:
    void get_xy();
    void show_xy();
};
class derived:public base
{
    int total;
    public:
    void get_total();
    void show_total();
};
void base::get_xy()
{
    cout<<endl<<"enter x and y:-";
    cin>>x>>y;
}
void base:: show_xy()
{
    cout<<endl<<"x= "<<x<<endl<<"y= "<<y;
}
void derived::get_total()
{
    total= x+y;
}
void derived:: show_total()
{
    cout<<endl<<"sum of x and y=  "<<total;
}
int main()
{
    derived d1;
    d1.get_xy();
    d1.get_total();
    d1.show_xy();
    d1.show_total();
    return 0;
}