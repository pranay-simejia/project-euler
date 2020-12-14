#include <iostream>
#include <math.h>
using namespace std;

/*int main()
{
    int count=1;
    int temp=0;
    for(int i=3;i>0;i+=2)
    {   if(count==10001)
        {cout<<i;
        break;}
        temp=0;
        for(int j=2;j<sqrt(i);j+=2)
            {
            if(i%j==0)
        {
            temp++;

            break;

        }

            if(temp==0)
            {
                count++;
                cout<<i<<" && "<<count<<endl;
            }


            }
    }
 return 0;
}*/

    int main()
    {


    int count=1;
    int temp=0;
    int i=3;
    int sum=0;

        while(i<=2000000)
    {   temp=0;
        for(int j=3;j<i;j=j+2)
        {
            if(i%j==0)
            {
                temp++;
                break;}

        }
        if(temp==0)
            {count++;
            sum=sum+i;
               // cout<<i<<" && "<<count<<endl;
            }
        i=i+2;
    }

    cout<<endl<<sum<<endl;
}
