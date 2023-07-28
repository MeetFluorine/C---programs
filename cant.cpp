#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
class canteen
{
    int sno,price,qt,amt;
    string dish;
    public:
    static int order;
    void new_receipt();
    void show_receipt();
};
int canteen:: order=8796;
void canteen::new_receipt()
{
  sno=1;
  price=10;
  qt=1;   
}
void canteen::show_receipt()
{
    cout<<sno<<dish<<qt<<price;
}
int main()
{
    canteen c;
    int choice;
    char ch;
    
    
    string s,m;
    cout<<"\n enter name of the customer:-";
    getline(cin,s);
    cout<<"\n enter number of the customer:-";
    getline(cin,m);
    system("cls");
    system("color 2");
    cout<<"\t\t  order no:-"<<c.order;
    cout<<"\n\t\t  TAX INVOICE\n";
    cout<<"\t\t  BIGGIES PIZZA\n";
    cout<<"\t\t  B R ENTERPRISES\n";
    cout<<"\t\tPH-9068005850/9068005840\n";
    cout<<"\t\tFSSAI NO.- 12721065000371";
    cout<<"\n\t\tGSTIN No.- 09AASFB9810H1Z1\n";
    cout<<"\t\tState name:- Uttar Pradesh\n";
    cout<<"---------------------------------------------------";
    cout<<"\nBill no.:-";
    cout<<"\nDate:-"<<__DATE__;
    cout<<"\nTime:-"<<__TIME__;
    cout<<"\ncust. Name:-"<<s;
    cout<<"\nMob No.-"<<m;
    cout<<"\n---------------------------------------------------";
    cout<<"\ndish name\t\tQty.\tRate\tamt.\n";
    cout<<"\n---------------------------------------------------";
    cout<<"\nenter your choice:-";
    cin>>choice;
   do
   {
        switch(choice)
        {
            case 1: cout<<"\n---------------------------------------------------";
                    cout<<"\ns.no.\t\tdish name\t\tQty.\tRate\tamt.\n";
                    cout<<"\n---------------------------------------------------";
                    c.new_receipt();
                    c.show_receipt();
                    
            break;
            case 2:2;
            break;
            case 3:3;
            break;
            case 4:4;
            break;
            case 5:5;
            break;
            default:
            cout<<"\n plz enter a valid choice:-";
        }
        cout<<"\n do you want to continue(y/n):-";
        cin>>ch;
    } while (ch=='y'||ch=='Y');
    
}