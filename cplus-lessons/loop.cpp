#include<iostream>
using namespace std;
int main()
{
    char name[10][10];
    cout<<"Enter several names Max 10 Characters"<<endl;

    int counter;
    for(counter=0;counter<=10;counter++)
    {
    cin>>name[counter];
    }

    cout<<"Your names are as follows"<<endl;

    int c;
    for(c=10;c>=0;c--)
    {
    cout<<name[c]<<endl;
    }
   return 0;

}
