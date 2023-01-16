#include <iostream>
using namespace std;
string checkspeed(float);
main ()
{
    float speed;
    string result;
    cout<<"Enter speed: ";
    cin>>speed;
    result=checkspeed(speed);
    cout<<result;
}
string checkspeed(float speed)
{
    string spee;
    if(speed<=10)
    {
        spee=="slow";
    }
    if (speed>10&&speed<=50)
    {
        spee="average";
    }
    if (speed>50&&speed<=150)
    {
        spee="fast";
    }
    return spee;
}    