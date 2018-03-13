
/*A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/
#include <iostream>
using namespace std;

int main()
{
  int i,j,k,sum,py,prod;
  int flag=0;
  for(i=1;i<=1000;i++)
  {
    for(j=i+1;j<=1000;j++)
    {
      for(k=j+1;k<=1000;k++)
      {
        sum=i+j+k;
        py=i*i+j*j;
        if(sum==1000 && py==(k*k))
        {
          prod=i*j*k;
          flag=1;
        }
        if(flag==1)
          break;
      }
      if(flag==1)
        break;
    }
    if(flag==1)
      break;

  }

  cout<<"Product :"<<prod<<endl;
  return 0;
}
