#include<stdio.h>
#include<string.h>
int main()
{
    char *name[10][20];
   printf("Enter several name (11) times\n");

    int counter=0;
    while(counter<=10)
    {
        gets(name[counter]);
        counter++;
    }
    printf("Your names are as follows\n");

    int c=10;
    while(c>=0)
    {
        printf("%s\n",name[c]);
        c--;
    }
         return 0;

}
