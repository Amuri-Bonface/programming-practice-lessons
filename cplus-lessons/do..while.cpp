#include<iostream>
using namespace std;
int main()
{
    char name[10][10];
    cout<<"Enter several names Max 10 Characters"<<endl;

    int counter=0;
    do
    {
    cin>>name[counter];
    counter++;
    }while(counter<=10);

    cout<<"Your names are as follows"<<endl;

    int c=10;
    do
    {
    cout<<name[c]<<endl;
    c--;
    }while(c>=0);
   return 0;

}
