#include <iostream>
using namespace std;
float neededhours(int hours,int days,int worker);
main ()
{
 int hours;
 int days;
 int workers; 
 cout <<"enter hours:";
 cin >>hours;
 cout <<"enter totaldays:";
 cin >>days;
 cout<<"enter workers: ";
 cin >>workers;
 int needed=neededhours(hours,days,workers);
  cout<<needed<<"needed hours: ";
  
 if(needed>hours)
  {
     cout <<"working time:"<<needed-hours;
   }
   if(needed<hours)
  {
    cout <<"working days: "<<hours-needed;
   } 

 }
 float neededhours(int hours,int days,int workers)
 {
  float trtime=days*0.1;
  float remtime=days-trtime;
  float totalhours=remtime*10*workers;
  return totalhours;
  }
  
   
  