#include<iostream>
using namespace std;
class factorial
{
    int num;
    public:
    int get_fact(int);
};

int get_fact(int num)
{
    int fact=1;
    while(num!=0)
    {
        fact= fact*num;
        num--;
       
    }
    return fact;
}
int main()
{
    factorial f;
    cout<<"factorial of (5)="<<get_fact(5);
}