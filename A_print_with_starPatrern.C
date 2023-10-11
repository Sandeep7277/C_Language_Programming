#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k=11;
clrscr();
for(i=7; i>=1; i--)
{
for(j=i; j>1; j--)
printf(" ");
printf("*");
for(j=k;j<10; j++)
if(i==3)
printf("*");
else
printf(" ");   k=k-2;
if(i<7)
printf("*");
printf("\n");
}
getch();
}