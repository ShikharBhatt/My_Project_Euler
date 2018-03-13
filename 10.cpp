/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  long n=2000000,sum=0,i,j;
  vector<bool> prime_no(n+1,true);

  for(i=2;i<n;i++)
  {
    if(prime_no[i]==true)
    {
      sum=sum+i;

      for(j=i*2;j<n;j=j+i)
      {
        prime_no[j]=false;
      }
    }
  }

  cout<<endl<<sum<<endl;
  return 0;
}

/*
  Answer : 142913828922
*/
