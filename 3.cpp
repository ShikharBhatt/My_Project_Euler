/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  long int n=600851475143 ,lp,i,j;
  int flag=0;


  for(i=3;i<=floor(sqrt(n));i=i+2)
  {
    flag=0;
    for(j=3;j<=sqrt(i);j=j+2)
    {
      if(i%j==0)
      {
        flag=1;
        break;
      }
    }

    if (flag==0)
    {
      if(n%i==0)
      {
        lp=i;
      }
    }
  }


  cout<<lp<<endl;

  return 0;
}
