#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   char ch;
   ifstream iff;
   iff.open("student.txt");
   ofstream of;
   of.open("another.txt");
   while(iff)
   {
        iff.get(ch);
        of.put(ch);
   }
   iff.close();
   of.close();
    return 0;
}