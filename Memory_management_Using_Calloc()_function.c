//Memory management function(calloc())
//Example of 1-d array.

//including header files
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<process.h>

//main function
void main()
{
//variable declaration
int *p,i,n;

puts("\t\t\t-: Memory Management Function (calloc()) :-");
puts("\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
printf("\t\t\t\t\tSubmitted By :- Snadeep Kumar,\t Date & Time :- %s %s\n",__DATE__,__TIME__);

//inputting size of 1-d array
puts("Enter size of 1-d array");
scanf("%d",&n);

//allocating memory in variable with calloc()
p = (int*)calloc(n, sizeof(int));

//check if memory is not allocated then display msg and terminate program
if (p==NULL)
{
puts("Insuffient memory space");
getch();
exit(0);
}

//inputting elements in 1-d array
puts("Enter element in 1-d array");
for(i=0; i<n; i++)
scanf("%d",p+i);

//Displaying elements in 1-d array
puts("Displaying 1-d array elements");
for(i=0; i<n; i++)
printf("%d\t",*(p+i));

//Release memory space that is allocated
free(p);
getch();
}
