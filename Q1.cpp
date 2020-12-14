#include <iostream>

using namespace std;

int main()
{int sum=0;

        for(int j=1;5*j<1000;j++)
        {
            sum=sum+5*j;

        }

        for(int i=1;3*i<1000;i++)
        {
            sum=sum+3*i;

        }
        for(int i=1;15*i<1000;i++)
        {
            sum=sum-15*i;

        }


    cout<<sum;


    return 0;
}
