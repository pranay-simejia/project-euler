#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int fact=2;
    int n,c;


    for(n=1;;n++)

    {   c=(n*(n+1))/2;
        fact=2;
       /* while(c%2==0)
        {
            fact++;
            c=c/2;
            if(fact==5){cout<<c<<" 1";
                    return 0;}
        }*/

        for(int i=2;i<sqrt(c);i++)
        {
            if(c%i==0)
            {
                fact=fact+2;
                //c=c/i;
                if(fact==500){
                cout<<c<<" 2";
                return 0;}
            }
        }

    }
    cout<<c<<" 3";
    return 0;
}
