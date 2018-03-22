#include <iostream>
using namespace std;

class Rectangle {
    int width, height,result;

  public:
    void set_values (int,int);
    int area()
    {
        result=width*height;
        return result ;
    }
};

void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

int main () {
  Rectangle rect;
  int w,h;

  cout<<"enter width"<<endl;
  cin>>w;
  cout<<"enter height"<<endl;
  cin>>h;

  rect.set_values (w,h);

cout << "area: " << rect.area();
  return 0;
}
