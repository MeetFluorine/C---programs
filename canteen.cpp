#include<iostream>
using namespace std;
//#include<string>
#include<stdlib.h>
#include<time.h>

class canteen {
public:
	int sno,price,quantity,total;
	string item;
	static int count;

	void push(canteen);
	void pop();
	void receipt();
	void get0();
	void get1();
	void get2();
	void get3();
	void get4();

	void show();

};
time_t my_time=time(NULL);
int canteen::count=87579;
string name;
int i,top2=0;
canteen stack[20];

int main() {
	int m=1;
	int ono;
	canteen a[5];
	system("color 2");
	cout<<"Please Enter Your Name = ";
	getline(cin,name);

	system("CLS");
	cout<<"\t\t\tWELCOME "<<name<<" TO CANTEEN MENU\n\t\t\t_________________________________\n\n";
	cout<<"\n*******************************************";
	cout<<"\n  *NOTE:(a.) Press 10 For View Reciept.\t  *\n      (b.) Press 0 For Exit.\t\t  *\n*******************************************\n";
	cout<<"\n\n\tS.NO\t\tITEM\t\tQUANTITY\tPRICE";
	cout<<"\n________________________________________________________________________";


	a[0].get0();
	a[1].get1();
	a[2].get2();
	a[3].get3();
	a[4].get4();



	a[0].show();
	a[1].show();
	a[2].show();
	a[3].show();
	a[4].show();
	cout<<"\n";

	do {

		cout<<"\n"<<m<<"> ENTER sno OF ITEM TO ORDER:->";
		cin>>ono;
		m++;
		if(ono>5&&ono!=10) {
			cout<<"\nENTER CORRECT CHOICE";
		} else {

			stack[top2].push(a[ono-1]);
			if(ono==10) {
				system("CLS");
				a[ono].receipt();
			}
		}
	} while(ono!=0);


	cout<<"THANX VISIT AGAIN";

	return 0;
}




void canteen::get0() {
	sno=1;
	item="BERGER";
	price=20;
	quantity=1;
}

void canteen::get1() {
	sno=2;
	item="SAMOSE";
	price=10;
	quantity=1;
}

void canteen::get2() {
	sno=3;
	item="NOODLES";
	price=30;
	quantity=1;
}

void canteen::get3() {
	sno=4;
	item="MOMOS";
	price=40;
	quantity=1;
}

void canteen::get4() {
	sno=5;
	item="PIZZA";
	price=80;
	quantity=1;
}

void canteen::show() {
	cout<<"\n";
	cout<<"\t0"<<sno<<"\t\t"<<item<<"\t\t"<<quantity<<"\t\t"<<price;
}

////////////////////////////////////////////////////////////////////////////////////////////////////

void canteen::push(canteen ono) {
	item=ono.item;
	sno=ono.sno;
	quantity=ono.quantity;
	price=ono.price;

	top2++;
	count++;
}

void canteen::receipt() {
	system("color 64");
	int i=0,total=0;
	cout<<"\n\t\t\t\t\t\tRECEIPT\n*****************************************************************************************************************";
	cout<<"\n\nInvoice No.="<<count<<"\t\t\t\t\t\t\tDate & Time : "<<ctime(&my_time);
	cout<<"\nName:"<<name;
	cout<<"\n-------------------------------------------------------------------------------------------------------------------";
	cout<<"\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
	cout<<"\n-------------------------------------------------------------------------------------------------------------------";
	cout<<"\n\n\n\tS.NO\t\tITEM\t\tQUANTITY\tPRICE";
	cout<<"\n_______________________________________________________________________";
	for(i=0; i<top2-1; i++) {
		cout<<"\n\t"<<stack[i].sno<<"\t\t"<<stack[i].item<<"\t\t"<<stack[i].quantity<<"\t\t"<<stack[i].price;
	}
	cout<<"\n___________________________________________________________________________________________________________________";

	for(i=0; i<top2-1; i++) {
		total=stack[i].price+total;
	}
	cout<<"\n\t\t\t\tTOTAL(in rupees)=\t"<<total;
	cout<<"\nTHANX! VISIT AGAIN";
	cout<<"\nENTER 0 TO EXIT:";
}