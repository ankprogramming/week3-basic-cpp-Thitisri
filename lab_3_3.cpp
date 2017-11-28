#include <iostream>

using namespace std;

int main() {

  const float pi = 3.14315926536;
  float r;
  float h;
  float Area;
  float Round;
  float Cylinder;

  cout<< "Please enter radius: " ;
  cin>>  r;
  Area=pi*r*r;
  cout<< "Area of Circle :" <<Area<<endl;
  Round=2*pi*r;
  cout<< "Round of Circle :" <<Round<<endl;

  cout<<"Please enter high:";
  cin>>h;
  Cylinder=pi*r*r*h;
  cout<<"Area of cylinder:"<<Cylinder<<endl;
  return 0;
}
