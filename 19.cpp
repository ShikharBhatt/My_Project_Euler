// You are given the following information, but you may prefer to do some research for yourself.
//
// 1 Jan 1900 was a Monday.
// Thirty days has September,
// April, June and November.
// All the rest have thirty-one,
// Saving February alone,
// Which has twenty-eight, rain or shine.
// And on leap years, twenty-nine.
// A leap year occurs on any year evenly divisible by 4, but not on a century unless it is divisible by 400.
// How many Sundays fell on the first of the month during the twentieth century (1 Jan 1901 to 31 Dec 2000)?

#include<iostream>
using namespace std;

//1 Jan 1901 ---- Tuesday(Calander)
int main()
{
  int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
  int days;
  int sundays=0;
  int day_week=2;

  for(int i=1901;i<=2000;i++)
  {
    if(i%4==0)
      month[1]=29;

    for(int m=0;m<12;m++)
    {
      for(int d=1;d<=month[m];d++)
      {
        if(day_week==7)
        {
          day_week=0;
          if(d==1)
              sundays++;
        }

          day_week++;
      }

    }
    month[1]=28;

  }

  cout<<"No. of sundays : "<<sundays<<endl<<endl;
  return 0;
}
/*Output:
  171
*/
