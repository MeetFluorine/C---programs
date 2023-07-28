#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cout<<"enter a  number:-";
    cin>>num;
    for(i=2 ; i<num; i++)
    {
        if(num%i==0)
        {
            cout<<"prime number.";
            break;
        }

    }
   
    return 0;
}