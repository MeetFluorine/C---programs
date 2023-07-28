#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char ch;
    ofstream fout;
    fout.open("student.txt");
    cout<<"enter a char:-";
    cin.get(ch);
    while(ch!='@')
    {
        fout.put(ch);
        cin.get(ch);
    }
    fout.close();
    ifstream fin;
    fin.open("student.txt");
    while(fin)
    {
        fin.get(ch);
        cout.put(ch);
    }
    fin.close();

}