#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter text and press @ to stope:-\n";
    ofstream of;
    of.open("student.txt");
    cin.get(ch);
    while(ch!='@')
    {
        of.put(ch);
        cin.get(ch);
    }    
    of.close();
    ifstream iff;
    iff.open("student.txt");
    cout<<"\nentered text is:-";
    while(iff)
    {
        iff.get(ch);
        cout.put(ch);
    }
    iff.close();
    return 0;
}