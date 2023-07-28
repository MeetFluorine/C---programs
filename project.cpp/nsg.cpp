#include<iostream>
#include<time.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void display(int*);
void array();
int mat[3][3],mat2[3][3],arr[8];
int movess=100;
string name;

void rule() {
	int count=1;
	system("color 04");
	system("CLS");
	cout<<"\n\t\t\t\t\t\t\t\tRule of the game:";
	cout<<"\n\t\t\t\t\t\t\tWelcome "<<name<<" To Gaming Room.\n\n";

	cout<<" 1.You can move only one step at a time by arrow key\n";
	cout<<" Move Up   : by Up arrow key";
	cout<<"\n Move Down : by Down arrow key";
	cout<<"\n Move Left : by Left arrow key";
	cout<<"\n Move Right: by Right arrow key";

	cout<<"\n\n 2.You can move number at empty position only \n";
	cout<<"\n 3.For each valid move : your total number of move will decreased by 1\n";
	cout<<"\n 4.Winning situation : Number in a 3*3 matrix should be in order from 1 to 8\n";
	cout<<"\n\t\t\t\tWinning situation Looks Like:\n\n";

	for(int i=0; i<3; i++) {
		if(i==0)cout<<" -------------"<<endl;
		for(int j=0; j<3; j++) {
			if(i==2 &&j==2) {
				cout<<"0"<<" | ";
				break;
			}
			if(j==0)cout<<" | ";
			cout<<count++<<" | ";
		}
		cout<<endl<<" -------------";
		cout<<endl;
	}
	cout<<"\n 5.You can exit the game at any time by pressing the 'x' key\n";
	cout<<"Happy Gaming,Good Luck\n";
	cout<<"Press any key to start game...";
	getch();
}

void play();

int main() {
	array();
	int top=0;
	cout<<"Enter Your Name: ";
	getline(cin,name);
	rule();
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			if(i==2&&j==2) {
				mat[i][j]=0;
				break;
			}
			mat[i][j]=arr[top++];
		}
	}
	mat2[0][0]=1;
	mat2[0][1]=2;
	mat2[0][2]=3;
	mat2[1][0]=4;
	mat2[1][1]=5;
	mat2[1][2]=6;
	mat2[2][0]=7;
	mat2[2][1]=8;
	mat2[2][2]=0;
	play();
	getch();
	return 0;
	
}

void play() {
	system("CLS");
	int *pointer=&mat[2][2],*first_node=&mat[0][0];

	char c;

	display(pointer);
	do {
		cout<<"Enter choice: ";
		c=	getch();
		if (c==72) {

			if(pointer==&mat[0][0] || pointer==&mat[0][1] ||pointer==&mat[0][2]) {
				*pointer=*(pointer+6);
				pointer =pointer+6;

			} else {
				*pointer=*(pointer-3);//up key
				pointer=pointer-3;
				movess--;
			}
		}

		if (c==80) {

			if(pointer==&mat[2][0] || pointer==&mat[2][1] ||pointer==&mat[2][2]) {
				*pointer=*(pointer-6);
				pointer =pointer-6;

			} else {
				*pointer=*(pointer+3);
				pointer=pointer+3;//down key
				movess--;
			}
		}
		if (c==77) {
			if(pointer==&mat[2][2]) {
				*pointer=mat[0][0];
				pointer =&mat[0][0];

			} else {

				*pointer=*(pointer+1);//right key
				pointer=pointer+1;
				movess--;
			}
		}
		if (c==75) {

			if(pointer==&mat[0][0]) {
				*pointer=mat[2][2];
				pointer =&mat[2][2];

			} else {

				*pointer=*(pointer-1);//left key
				pointer=pointer-1;
				movess--;
			}
		}

		if (c=='x')exit(0);

		system("CLS");
		display(pointer);
	} while(movess!=0);
}


void display(int *pointer) {
	int flag=0;
	*pointer=0;
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			if(mat[i][j]!=mat2[i][j]) {
				flag=1;
				break;
			}
		}
	}
	if(flag==0) {int count=1;
		cout<<"\n Congratulations...You Win :)\n";
		cout<<" Moves Remaining="<<movess<<endl<<endl<<endl<<endl<<endl<<endl;
		for(int i=0; i<3; i++) {
		if(i==0)cout<<" -------------"<<endl;
		for(int j=0; j<3; j++) {
			if(i==2 &&j==2) {
				cout<<"0"<<" | ";
				break;
			}
			if(j==0)cout<<" | ";
			cout<<count++<<" | ";
		}
		cout<<endl<<" -------------";
		cout<<endl;
	}getch();
		exit(0);
	} else if(flag==1) {


		cout<<"\n Moves remaining="<<movess<<endl<<endl;
		for(int i=0; i<3; i++) {
			if(i==0)cout<<" -------------"<<endl;
			for(int j=0; j<3; j++) {
				if(j==0)cout<<" | ";
				cout<<mat[i][j]<<" | ";
			}
			cout<<endl<<" -------------";
			cout<<endl;
		}
		flag=0;
	}
	if(movess==0)cout<<"\n Out of move :(\n";
}

void array() {
	srand(time(0));
	for(int i=0; i<8; i++) {
		int value,flag=0;
		value=(rand()%8)+1;
		if(i==0) {
			arr[0]=value;
			continue;
		}
		for(int j=0; j<i; j++) {
			if(arr[j]==value) {
				flag=1;
				break;
			}
		}
		if(flag==0) {
			arr[i]=value;
		} else if (flag==1) {
			flag=0;
			i--;
		}
	}
}