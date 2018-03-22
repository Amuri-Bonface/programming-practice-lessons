#include<stdio.h>
#include<string.h>
void displayMyname()
{
    char name[10];
    printf("enter your name max 10 characters\n");
    gets(name);
    printf("your name is%s",name);
}
int main()
{
    displayMyname();
    return 0;
}
