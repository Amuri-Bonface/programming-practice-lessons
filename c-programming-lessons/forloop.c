#include<stdio.h>
#include<string.h>
int main()
{
   char *name[10][20];
   printf("Enter several name (11) times\n");

   int counter;
   for(counter=0;counter<=10;counter++)
    {
    gets(name[counter]);
    }

   printf("Your names are as follows\n");
    int c;
    for(c=10;c>=0;c--)
    {
    printf("%s\n",name[c]);
    }
   return 0;

}
