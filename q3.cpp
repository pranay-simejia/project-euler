#include <iostream>
#include <math.h>
using namespace std;

/*int isPrime(long long i);

int main()
{
  long long n=600851475143;
  long long i,largest_fact;
   for(i=2;i<=n;i++)
   {
       if(isPrime(i)&&n%i==0)
       {
           largest_fact=i;
       }
   }

    cout<<endl<<endl<<largest_fact;
    return 0;
}


int isPrime(long long i)
{
    for(int j=2;j<i;j++)
    {
        if(i%j==0)
        {
            return 0;
        }

    }

    return 1;
}
*/








int main()
{
    long long n,i;
    int largest_fact;
    n=600851475143;

    while(n%2==0)
    {
        n=n/2;
    }

    for(i=3;i<sqrt(600851475143);i=i+2)
    {
        while(n%i==0)
        {
            n=n/i;
            largest_fact=i;
        }
    }
    cout<<largest_fact;

}
