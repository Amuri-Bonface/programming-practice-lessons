#include<stdio.h>
#include<string.h>
int main()
{
    char *name[10][20];
   printf("Enter several name (11) times\n");

    int counter=0;
   do
    {
    gets(name[counter]);
    counter++;
    }while(counter<=10);
    printf("Your names are as follows\n");

    int c=10;
    do
    {
        printf("%s\n",name[c]);
        c--;
    }while(c>=0);
         return 0;

}
