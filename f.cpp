#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char ch;
   fstream fs;
   fs.open("student.txt",ios::in);
   int lt,count=0;
   while(fs)
   {
     ch=fs.get();
      if(ch==32)
      {
        count++;
     }
   }
   cout<<"space="<<count;
   return 0;
}