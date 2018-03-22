
#include<iostream>
using namespace std;
int main()
{
    int mark,choice;
    char grade;
    cout<<"enter students marks"<<endl;
    cin>>mark;
    if (mark>=70 && mark<=100)
            {
                grade='A';
            }
    else if (mark<70 && mark>=0)
            {
                grade='D';
            }
    cout<<"You Scored: "<<grade<<endl;
switch(grade)
    {
            case 'A':
            {
               cout<<"Excellent, You deserved"<<endl;
               break;
            }
            case 'D':
            {
               cout<<"Poor, Come with yo parents"<<endl;
               break;
            }
            default:    cout<<"You'r Nowhere to be seen"<<endl;
             break;
    }
    return 0;
}
