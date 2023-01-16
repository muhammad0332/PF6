#include <iostream>
using namespace std;
float taxcalculater(char type,float price);
main ()
{
 char type;
 float price;
 float total;
 cout<<"type:";
  cin >>type;
 cout<<"price";
 cin>>price;
 total=taxcalculater(type,price);
 cout <<"final price"<<total;
}
 float taxcalculater(char type,float price)
{
  float taxamount;
 float taxrate;
 float final;
 taxrate=(price*0.06);
 
 final=taxrate+price;
 return final;
} 
  