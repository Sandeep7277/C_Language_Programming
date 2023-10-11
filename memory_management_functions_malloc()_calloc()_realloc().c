//Memory management function(malloc(), calloc(), realloc())

//including header files
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<process.h>

//main function
void main()
{
//variable declaration
int *p, *p1, i, n;

puts("\t\t\t-: Memory Management Function [ malloc), calloc(), realloc()] :-");
puts("\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
printf("\t\t\t\t\tSubmitted By :- Snadeep Kumar,\t Date & Time :- %s %s\n",__DATE__,__TIME__);

//inputting size of  array
puts("Enter size of array");
scanf("%d",&n);

//allocating memory in array 1 with malloc()
p = (int*)malloc(n*sizeof(int));

//allocating memory in array 2 with calloc()
p1 = (int*)calloc(n, sizeof(int));


//check if memory is not allocated in array1 then display msg and terminate program
if (p==NULL)
{
puts("\nInsuffient memory space in array 1");
getch();
exit(0);
}

//check if memory is not allocated in array 2 then display msg and terminate program
if (p1==NULL)
{
puts("\nInsuffient memory space in array 2");
getch();
exit(0);
}
//inputting elements in array 1
puts("\nEnter elements in array 1");
for(i=0; i<n; i++)
scanf("%d",p+i);

//inputting elements in array 2
puts("\nEnter elements in array 2");
for(i=0; i<n; i++)
scanf("%d",p1+i);

//Displaying elements of array 1
puts("\nDisplaying array 1 elements");
for(i=0; i<n; i++)
printf("%d\t",*(p+i));

//Displaying elements of array 2
puts("\n\nDisplaying array 2 elements");
for(i=0; i<n; i++)
printf("%d\t",*(p1+i));

//reallocating memory space
puts("\n\nAllocating space with new size");
puts("\nEnter New size of array");
scanf("%d",&n);
p=(int*)realloc(p,n*sizeof(int));
p1=(int*)realloc(p1,n*sizeof(int));

//check if memory is not allocated in array1 then display msg and terminate program
if (p==NULL)
{
puts("\nInsuffient memory space in array 1");
getch();
exit(0);
}

//check if memory is not allocated in array 2 then display msg and terminate program
if (p1==NULL)
{
puts("\nInsuffient memory space in array 2");
getch();
exit(0);
}

//inputting new elements in array 1
puts("\nEnter New elements in array 1");
for(i=0; i<n; i++)
scanf("%d",p+i);

//inputting new elements in array 2
puts("\nEnter New elements in array 2");
for(i=0; i<n; i++)
scanf("%d",p1+i);

//Displaying New elements of array 1
puts("\nDisplaying New array 1 elements");
for(i=0; i<n; i++)
printf("%d\t",*(p+i));

//Displaying New elements of array 2
puts("\n\nDisplaying New array 2 elements");
for(i=0; i<n; i++)
printf("%d\t",*(p1+i));

//Release memory space that is allocated
free(p);
free(p1);
getch();
}
