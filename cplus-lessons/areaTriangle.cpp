#include <iostream>
using namespace std;

int main()
{
   const float half=0.5;
   int a,b;
   float area;

   cout<<"Enter Height"<<endl;
   cin>>a;
   cout<<"enter Base"<<endl;
   cin>>b;

   area=half*a*b;

   cout<<"The Area is="<<area;

   return 0;
}
