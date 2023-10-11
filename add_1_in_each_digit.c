//program to accept three digit no, add 1 to each digit.
#include<stdio.h>
#include<conio.h>
void main()
{
int num,s=0,d;
printf("enter three digit no.");
scanf("%d",&num);
d=num/100;
num=num%100;
s=s*10+d+1;
d=num/10;
num=num%10;
s=(s*10+d+1)*10+num+1;
printf("no after adding 1 in each digits=%d",s);
getch();
}
