/*Program to append student record data in text file by using structure record with file handling concept*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct student
{
int roll;
char name[20];
float marks;
};
void main()
{
struct student s;
FILE *p;
char ans='y';
p=fopen("student.txt","a");
if(p==NULL)
{
puts("file does not exist");
exit(0);
}
while(1)
{
puts("enter roll, name and marks of a student");
scanf("%d%s%f",&s.roll,s.name,&s.marks);
fwrite(&s,sizeof(s),1,p);
puts("do you want to append any more record y/n?");
ans=getch();
if(ans=='n'||ans=='N')
break;
}
fclose(p);
getch();
}
