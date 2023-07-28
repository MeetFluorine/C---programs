#include<iostream>
using namespace std;
int main()
{
    int base,exp;
    long int result=1;
    cout<<"enter the number:-";
    cin>>base;
    cout<<"enter exponent term:-";
    cin>>exp;
    while(exp!=0)
    {
        result*=base;
        exp--;
    }
    cout<<"result="<<result;
    return 0;
}