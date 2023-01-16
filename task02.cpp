#include <iostream>
using namespace std;
float volume();
main()
{
 float result;
 result=volume();
 cout <<"volume is:<<result;
  cout <<"m^3";
}
 float volume()
  {
  int length;
  int wedth;
  int hight;
  float x;
  float volume;
  cout <<"lenth: ";
  cin >>length;
  cout <<"wedth: ";
  cin>>wedth;
  cout <<"hight: ";
  cin >>hight;
  x=length*wedth*hight;
  volume=x/3;
  return volume;
   }