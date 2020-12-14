#include <iostream>
#include <cmath>
using namespace std;
int main()
{
unsigned long long int n;
int sum=0;
n=pow(2,1000);

    while(n>1)
    {
        sum=(n%10)+sum;
        n=n/10;

    }

    cout<<sum;
}
