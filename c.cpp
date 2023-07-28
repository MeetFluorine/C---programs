#include<iostream>
using namespace std;
class list
{
    int price,qty,amount,total;
    string dish;
    public:
    void get0();
    void get1();
    void get2();
    void show();
    void bill(list,list);
};
int main()
{
    list l,l1,l2;
    int choice;
    char ch;
    cout<<"-----------MENU------------";
    cout<<"\npress 1 for samosha\npress 2 for litti\npress 3 for chawmin";
   do
   {    
        cout<<"\n enter your choice:-";
        cin>>choice;
        switch(choice)
        {
            case 1: l.get0();
            break;
            case 2: l1.get1();
            break;
            case 3: l2.get2();
            break;
            default:
            cout<<"\n enter a valid option";
        }
        cout<<"\n do you want to continue(y/n):-";
        fflush(stdin);
        cin>>ch;
    }while(ch=='Y'||ch=='y');
    cout<<"\n dish name"<<"\t"<<"qty."<<"\t"<<"price"<<"\t"<<"amount";
    l.show();
    l1.show();
    l2.show();
    l1.bill(l,l2);
    return 0;
}
void list::bill(list l, list l2)
{
    total=amount+l.amount+l2.amount;
    cout<<"\n\t\t\tgrand total="<<total;
}
void list::show()
{
    cout<<"\n"<<dish<<"\t\t"<<qty<<"\t"<<price<<"\t"<<amount;
}
void list::get0()
{
    dish="samosha";
    price=10;
    cout<<"enter quantity:-";
    cin>>qty;
    amount=price*qty;
}
void list::get1()
{
    dish="litti";
    price=5;
    cout<<"enter quantity:-";
    cin>>qty;
    amount=price*qty;
}
void list::get2()
{
    dish="chawmin";
    price=30;
    cout<<"enter quantity:-";
    cin>>qty;
    amount=price*qty;
}