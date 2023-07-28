#include<iostream>
using namespace std;
class array
{
    int arr1[10],arr2[10],sum[10];
    public:
    void getvalue(void);
    void showoutput(void);
    void sumarray(void);
};
void array::getvalue(void)
{
    int i;
    for(i=0;i<10;i++)
    {
        cout<<"enter the value of arr1["<<i<<"] value:-";
        cin>>arr1[i];
    }
    for(i=0;i<10;i++)
    {
        cout<<"enter the value of arr2["<<i<<"] value:-";
        cin>>arr2[i];
    }
}
void array::sumarray(void)
{
    int i;
    for(i=0;i<10;i++)
    {
        sum[i]=arr1[i]+arr2[i];
    }
    for(i=0;i<10;i++)
    {
        cout<<"\nsum["<<i<<"]="<<sum[i];
    }
}
int main()
{
    array a;
    a.getvalue();
    a.sumarray();
    return 0;
}