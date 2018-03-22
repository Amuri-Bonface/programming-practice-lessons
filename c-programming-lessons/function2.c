#include<stdio.h>
//area of a cylinder
//A=(2*pi*r*h)+(2*pi*r*r)
int main()
{
  float radius,height;
  double area;
                    //Using input/output functions to get values of radius and height
  printf("enter the radius\n");
  scanf("%f",&radius);
  printf("enter the height\n");
  scanf("%f",&height);
                    //Below is a prototype function that simply tells "main" what to expect
  double areaCylinder(float,float);
                    //below  is where we call our function and assign the result to variable area
  area=areaCylinder(radius,height);
                    //Output of what we received from the function.
  printf("The area of a cylinder=%f",area);
  return 0;
}

double areaCylinder(float r,float h)
{
  double a;
  const float pi=3.14;
  a=(2*pi*r*h)+(2*pi*r*r);
  return a;
}
