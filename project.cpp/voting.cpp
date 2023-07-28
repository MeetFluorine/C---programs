#include<stdio.h>
#include<conio.h>
int main()
{int arr[100],n=100,i,a=0,b=0,c;
printf("\t\t\t<:PRESS 1 FOR ANKUR SIR:>");
printf("\t\t<:PRESS 2 FOR PRAMOD SIR:>");
printf("\n\t\t\t\t\t<:PRESS 0 TO END VOTING:>\n");



for(i=1;i<=n;i++){printf("\nENTER %d VOTE=>",i);
scanf("%d",&arr[i]); 

if(arr[i]==0){break;}

if(arr[i]==1){a++;}
else if(arr[i]==2){b++;}
else{printf("Enter Correct Choice");
}
printf("\nVOTE SUBMITTED SUCCESSFULLY:>");
}

printf("\n\n\t\t\t\t\t\tENTER THE CODE=");
scanf("%d",&c);

if(c==7488){
printf("\nANKUR SIR GET %d VOTE",a);
printf("\nPRAMOD SIR GET %d VOTES",b);

if(a>b){printf("\n\n\t\t\t\n\t\t<:ANKUR SIR WIN WITH %d VOTES:>",a-b);}
else if(a==b){printf("\n\n\t\t\t\t<:BOTH GET EQUEL VOTES:>");}
else{printf("\n\n\t\t\t\t<:PRAMOD SIR WIN BY %d VOTES:>",b-a);}}
else{printf("\n\n\t\t\t\t\t\t<:OHH WRONG CODE:>");}getch();}
