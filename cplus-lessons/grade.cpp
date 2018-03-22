#include<iostream>
using namespace std;
int main()
{
    int mark;
    cout<<"Enter student's marks"<<endl;
    cin>>mark;

    if(mark<50 && mark>=0)
    {
        cout<<"FAIL"<<endl;

    }
    else if (mark>=50 && mark<=100)
    {
        cout<<"PASSED"<<endl;
    }
    return 0;
}
