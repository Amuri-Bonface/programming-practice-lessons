
#include <iostream>
using namespace std;

float calcArea(float height, float base)
{
    const float half=0.5;
    float area;
    area=half*base*height;
    return area;
}

int main()
{
    float h,b;
    float result;
    float calcArea(float, float);
   cout<<"Enter Height"<<endl;
   cin>>h;
   cout<<"enter Base"<<endl;
   cin>>b;

   result=calcArea(h,b);
   cout<<"The Area is="<<result;

   return 0;
}
