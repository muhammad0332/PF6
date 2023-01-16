#include <iostream>
using namespace std;
float totalincome(string,int,int);
main()
{
    string type;
    int rows;
    int column;
    float total;
    cin>>type;
    cin>>rows;
    cin>>column;
    total=totalincome(type,rows,column);
    cout<<total;
}
 float totalincome(string type,int rows,int column)
 {  float income;
    if(type=="premeir")
    {
        int price=12;
      
        income=12*rows*column;
    }
    return income;
 }