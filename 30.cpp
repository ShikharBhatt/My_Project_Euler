/*The highest sum of 5th powers(5 digit) 295245 ,so all five digit numbers fall in this range.
The highest sum of 5th powers(6-digit) 354294, so all six digit numbers fall in this range. 
With 7 digit numbers, the highest value is 413343, i.e. the highest sum of the 5th powers 
of a 7 digit number only adds up to a 6 digit number.  
So we only need to loop from 2 to 354294.
*/

#include<iostream>
using namespace std;

int main(){
    int n,sum=0,temp=0,rem;

    for(int i=2;i<=354294;i++)
    {
        temp=0;
        n=i;
        while(n!=0)
        {
            rem=n%10;
            temp=temp+(rem*rem*rem*rem*rem);
            if(temp>i)
                break;
            n=n/10;
        }
        if(temp==i)
            sum=sum+i;

    }

    cout<<sum<<endl;
    return 0;
}

/*Output:
443839
*/