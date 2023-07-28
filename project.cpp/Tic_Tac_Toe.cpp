#include<iostream>
#include<conio.h>            //header files
using namespace std;
void two_player();
void smart_computer();
void display(char);
int result_check();
char mat[3][3];
string namep1,namep2;       //declaration of global variables


int main() {
	system("color 06");
	int choice;
	char c;
	cout<<"\t\t\t\tWelcome To Tic-Tac_Toe Game";
	cout<<"\n\n*******************************************************************************************";
	cout<<endl<<endl<<"Press 1 for play with smart computer:";
	cout<<"\nPress 2 for play with friend:";
	cin>>choice;

	if(choice==1) {
		cout<<"\nEnter Name:";
		fflush(stdin);
		getline(cin,namep1);
		namep2="computer";

		do {
			char count='1';
			for(int i=0; i<3; i++) {
				for(int j=0; j<3; j++) {
					mat[i][j]=count++;;
				}
			}


			smart_computer();
			cout<<"\nWant Play again press ' y '\nelse press any key: ";
			c=getch();
		} while(c=='y');
	}
	//play with smart_computer

	if(choice==2) {
		fflush(stdin);
		cout<<"Enter Player 1 Name:";
		getline(cin,namep1);

		cout<<"Enter Player 2 Name:";

		getline(cin,namep2);

		do {
			char count='1';
			for(int i=0; i<3; i++) {
				for(int j=0; j<3; j++) {
					mat[i][j]=count++;;
				}
			}

			two_player();
			cout<<"\nWant Play again press ' y '\nelse press any key: ";
			c=getch();
		} while(c=='y');
	}                                       //play with smart_computer

	else {
		cout<<"\nEnter correct choice";
	}

	return 0;
}                                       //end of main function

void two_player() {
	char p1,p2;
	char *matrix;
	display(p1);
	matrix=&mat[0][0];
	do {

labelp1:                //Uses of goto for enter key again for p1;
		cout<<endl<<" "<<namep1<<" Move : ";
		p1=getch();
		p1-=48;

		if(*(matrix+p1-1)=='O'|| *(matrix+p1-1)=='X' || p1>9 ||p1<1) {
			cout<<endl<<"Invalid Move\n";
			goto labelp1;
		} else {

			*(matrix+p1-1)='O';
//			matrix=&mat[0][0];
			display('1');
		}
labelp2:                //Uses of goto for enter key again for p2;
		if(result_check()!=2)break;
		cout<<endl<<" "<<namep2<<" Move : ";
		p2=getch();
		p2-=48;

		if(*(matrix+p2-1)=='O'|| *(matrix+p2-1)=='X'|| p2>9 || p2<1) {
			cout<<endl<<"Invalid Move\n";
			goto labelp2;
		} else {
			*(matrix+p2-1)='X';
//			matrix=&mat[0][0];
			display('2');
		}



	} while(result_check()==2);
}                                   //two_player function end here
void display(char winner) {                    //Display Function
	system("CLS");
	cout<<endl<<endl;
	cout<<namep1<<" Marker: O"<<endl;
	cout<<namep2<<" Marker: X";
	cout<<endl<<endl;

	for(int i=0; i<3; i++) {
		if(i==0) {
			cout<<endl;
			cout<<" -------------";
			cout<<endl;
		}
		for(int j=0; j<3; j++) {
			if(j==0)cout<<" |";
			cout<<" "<<mat[i][j]<<" |";
		}

		cout<<endl;
		cout<<" -------------";
		cout<<endl;
	}
	if(result_check()==1) {
		if(winner=='1')
			cout<<endl<<endl<<namep1<<" Win :)";
		else cout<<endl<<endl<<namep2<<" Win :)";
		getch();
//		exit(0);
	}
	if(!result_check()) {
		cout<<"\n Match Draw";
		getch();
//		exit(0);
	}
}
int result_check() {                   //result_check function started
	int flag=0;
	//Player 1 winning situations:-
	if(mat[0][0]=='O'&&mat[0][1]=='O'&&mat[0][2]=='O'||mat[1][0]=='O'&&mat[1][1]=='O'&&mat[1][2]=='O'||mat[2][0]=='O'&&mat[2][1]=='O'&&mat[2][2]=='O')return 1;
	if(mat[0][0]=='O'&&mat[1][0]=='O'&&mat[2][0]=='O'||mat[0][1]=='O'&&mat[1][1]=='O'&&mat[2][1]=='O'||mat[0][2]=='O'&&mat[1][2]=='O'&&mat[2][2]=='O')return 1;
	if(mat[0][0]=='O'&&mat[1][1]=='O'&&mat[2][2]=='O' ||mat[0][2]=='O'&&mat[1][1]=='O'&&mat[2][0]=='O')	return 1;

	//Player 2 winning situations:-
	if(mat[0][0]=='X'&&mat[0][1]=='X'&&mat[0][2]=='X'||mat[1][0]=='X'&&mat[1][1]=='X'&&mat[1][2]=='X'||mat[2][0]=='X'&&mat[2][1]=='X'&&mat[2][2]=='X')return 1;
	if(mat[0][0]=='X'&&mat[1][0]=='X'&&mat[2][0]=='X'||mat[0][1]=='X'&&mat[1][1]=='X'&&mat[2][1]=='X'||mat[0][2]=='X'&&mat[1][2]=='X'&&mat[2][2]=='X')return 1;
	if(mat[0][0]=='X'&&mat[1][1]=='X'&&mat[2][2]=='X' ||mat[0][2]=='X'&&mat[1][1]=='X'&&mat[2][0]=='X')	return 1;

	//Match Draw situation:-
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			if(mat[i][j]>=49&&mat[i][j]<=57)flag=1;
		}
	}
	if(flag==0) return 0;
	else return 2;
}

//smart computer


void smart_computer() {
	char p1;
	char *matrix;
	display(p1);
	matrix=&mat[0][0];



	do {

labelp1:                //Uses of goto for enter key again for p1;
		cout<<endl<<" "<<namep1<<" Move : ";
		p1=getch();
		p1-=48;

		if(*(matrix+p1-1)=='O'|| *(matrix+p1-1)=='X' || p1>9|| p1<1) {
			cout<<endl<<"Invalid Move\n";
			goto labelp1;
		} else {

			*(matrix+p1-1)='O';
			matrix=&mat[0][0];
			display('1');
		}

		//computer logic:

		//for win
		//first row
		if(mat[0][0]=='X' && mat[0][1]=='X' && mat[0][2]!='O')mat[0][2]='X';
		else if(mat[0][0]=='X' && mat[0][2]=='X' && mat[0][1]!='O')mat[0][1]='X';
		else if(mat[0][1]=='X' && mat[0][2]=='X' && mat[0][0]!='O')mat[0][0]='X';


		//second row
		else if(mat[1][0]=='X' && mat[1][1]=='X' && mat[1][2]!='O')mat[1][2]='X';
		else	if(mat[1][0]=='X' && mat[1][2]=='X' && mat[1][1]!='O')mat[1][1]='X';
		else	if(mat[1][1]=='X' && mat[1][2]=='X' && mat[1][0]!='O')mat[1][0]='X';

		//third row
		else	if(mat[2][0]=='X' && mat[2][1]=='X' && mat[2][2]!='O')mat[2][2]='X';
		else	if(mat[2][0]=='X' && mat[2][2]=='X' && mat[2][1]!='O')mat[2][1]='X';
		else	if(mat[2][1]=='X' && mat[2][2]=='X' && mat[0][2]!='O')mat[2][0]='X';

		//first column
		else	if(mat[0][0]=='X' && mat[1][0]=='X' && mat[2][0]!='O')mat[2][0]='X';
		else	if(mat[0][0]=='X' && mat[2][0]=='X' && mat[1][0]!='O')mat[1][0]='X';
		else 	if(mat[1][0]=='X' && mat[2][0]=='X' && mat[0][0]!='O')mat[0][0]='X';

		//second column
		else	if(mat[0][1]=='X' && mat[1][1]=='X' && mat[2][1]!='O')mat[2][1]='X';
		else	if(mat[0][1]=='X' && mat[2][1]=='X' && mat[1][1]!='O')mat[1][1]='X';
		else	if(mat[1][1]=='X' && mat[2][1]=='X' && mat[0][1]!='O')mat[0][1]='X';

		//third column
		else	if(mat[0][2]=='X' && mat[1][2]=='X' && mat[2][2]!='O')mat[2][2]='X';
		else	if(mat[0][2]=='X' && mat[2][2]=='X' && mat[1][2]!='O')mat[1][2]='X';
		else	if(mat[1][2]=='X' && mat[2][2]=='X' && mat[0][2]!='O')mat[0][2]='X';


		//first diagonal
		else	if(mat[0][0]=='X' && mat[1][1]=='X' && mat[2][2]!='O')mat[2][2]='X';
		else	if(mat[0][0]=='X' && mat[2][2]=='X' && mat[1][1]!='O')mat[1][1]='X';
		else	if(mat[1][1]=='X' && mat[2][2]=='X' && mat[0][0]!='O')mat[0][0]='X';

		//second diagonal
		else	if(mat[0][2]=='X' && mat[1][1]=='X' && mat[2][0]!='O')mat[2][0]='X';
		else	if(mat[0][2]=='X' && mat[2][0]=='X' && mat[1][1]!='O')mat[1][1]='X';
		else	if(mat[1][1]=='X' && mat[2][0]=='X' && mat[0][2]!='O')mat[0][2]='X';






		//row second for playing without wining situations
		else if( mat[1][0]=='O' && mat[1][1]=='O' && mat[1][2]!='X' && mat[1][2]!='O')mat[1][2]='X';
		else if( mat[1][0]=='O' && mat[1][2]=='O' && mat[1][1]!='X' && mat[1][1]!='O')mat[1][1]='X';
		else if( mat[1][1]=='O' && mat[1][2]=='O' && mat[1][0]!='X' && mat[1][0]!='O')mat[1][0]='X';

		//row third
		else if( mat[2][0]=='O' && mat[2][1]=='O' && mat[2][2]!='X' && mat[2][2]!='O')mat[2][2]='X';
		else if( mat[2][0]=='O' && mat[2][2]=='O' && mat[2][1]!='X' && mat[2][1]!='O')mat[2][1]='X';
		else if( mat[2][1]=='O' && mat[2][2]=='O' && mat[2][0]!='X' && mat[2][0]!='O')mat[2][0]='X';


		//first column
		else if( mat[0][0]=='O' && mat[1][0]=='O' && mat[2][0]!='X' && mat[2][0]!='O')mat[2][0]='X';
		else if( mat[0][0]=='O' && mat[2][0]=='O' && mat[1][0]!='X' && mat[1][0]!='O')mat[1][0]='X';
		else if( mat[1][0]=='O' && mat[2][0]=='O' && mat[0][0]!='X' && mat[0][0]!='O')mat[0][0]='X';

		//second column
		else if( mat[0][1]=='O' && mat[1][1]=='O' && mat[2][1]!='X' && mat[2][1]!='O')mat[2][1]='X';
		else if( mat[0][1]=='O' && mat[2][1]=='O' && mat[1][1]!='X' && mat[1][1]!='O')mat[1][1]='X';
		else if( mat[1][1]=='O' && mat[2][1]=='O' && mat[0][1]!='X' && mat[0][1]!='O')mat[0][1]='X';


		//third column
		else if( mat[0][2]=='O' && mat[1][2]=='O' && mat[2][2]!='X' && mat[2][2]!='O')mat[2][2]='X';
		else if( mat[0][2]=='O' && mat[2][2]=='O' && mat[1][2]!='X' && mat[1][2]!='O')mat[1][2]='X';
		else if( mat[1][2]=='O' && mat[2][2]=='O' && mat[0][2]!='X' && mat[0][2]!='O')mat[0][2]='X';


		//first diagonal check
		else if( mat[0][0]=='O' && mat[2][2]=='O' && mat[1][1]!='X' && mat[1][1]!='O')mat[1][1]='X';
		else if( mat[0][0]=='O' && mat[1][1]=='O' && mat[2][2]!='X' && mat[2][2]!='O')mat[2][2]='X';
		else if( mat[1][1]=='O' && mat[2][2]=='O' && mat[0][0]!='X' && mat[0][0]!='O')mat[0][0]='X';


		//second diagonal check
		else if( mat[0][2]=='O' && mat[1][1]=='O' && mat[2][0]!='X' && mat[2][0]!='O')mat[2][0]='X';
		else if( mat[0][2]=='O' && mat[2][0]=='O' && mat[1][1]!='X' && mat[1][1]!='O')mat[1][1]='X';
		else if( mat[1][1]=='O' && mat[2][0]=='O' && mat[0][2]!='X' && mat[0][2]!='O')mat[0][2]='X';


		//universal logic
		else {
			int flag=0;
			for(int i=0; i<9; i++) {
				for(int j=0; j<9; j++) {
					if(mat[i][j]!='X' && mat[i][j]!='O') {
						mat[i][j]='X';
						flag=1;
						break;

					}
				}
				if (flag==1)break;
			}
		}
		display('2');
	} while(result_check()==2);

}