#include <iostream>
using namespace std;
char per(int number);
main ()
{
    int number;
    int result;
    cin>>number;
    result=per(number);
    cout<<result;
}
char  per(int number)
{    
     char grade;
    if(number<50)
    {
    grade='F';
    }
    if(number>=50 && number<=60)
    {
        grade='E';
    }
    if(number>=61 && number<=70)
    {
        grade='D';
    }
    if(number>=71 && number<=80)
    {
      grade='C';
    }
    if(number>=80 && number<=85)
    {
        grade='B';
    }
    if(number>85 && number<=100)
    {
        grade='A';
    }
    return grade;
}    