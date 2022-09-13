#include <iostream>
using namespace std;

int main() {
 double x,z;
 int planet;
  
cout<<"Hi Little Mac\n"<<"What is your earth weight?\n";
cin>> x;
cout<<"\nEnter a number for the planet you want to fight on\n"<<"1.Mercury\n"<<"2.Venus\n"<<"3.Mars\n"<<"4.Jupiter\n"<<"5.Saturn\n"<<"6.Uranus\n"<<"7.Neptune\n";

switch(planet)
{
  case 1 :
  z=x*0.38;
  cout<<"Your weight on Mercury is "<<z;
  break;

  case 2 :
  z=x*0.91;
  cout<<"Your weight on Venus is "<<z;
  break;

  case 3 :
  z=x*0.38;
  cout<<"Your weight on Mars is "<<z;
  break;

  case 4 :
  z=x*2.34;
  cout<<"Your weight on Jupiter is "<<z;
  break;

  case 5 :
  z=x*2.34;
  cout<<"Your weight on Saturn is "<<z;
  break;

  case 6 :
  z=x*0.92;
  cout<<"Your weight on Uranus is "<<z;
  break;

  case 7 :
  z=x*1.19;
  cout<<"Your weight on Neptune is "<<z;
  break;

  default:
  cout<< "Invalid Choice!";
}

  
}