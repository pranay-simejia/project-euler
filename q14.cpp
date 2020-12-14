#include <iostream>
using namespace std;

int main()
{ cout<<"hello1";
    unsigned long int c,n,flag;

    flag=0;
    cout<<"hello";
  unsigned long int counter[1000001];
   cout<<"hi";
 unsigned long int max=0;

    for(unsigned long int  i=0;i<=1000000;i++)
    {
        counter[i]=0;
         cout<<counter[i];

    }


        for(n=1;n<=1000000;n++)
        {
            c=n;
            flag=0;
            while((c!=1)&&(c>=n))
            {    flag++;
                if(c%2==0)
                {
                c=c/2;
                }
                else
                {
                    c=3*c+1;
                }

            }
       if(c==1)
                {   counter[n]=flag;

                }
        else{counter[n]=flag+counter[c];   }

          if(counter[n]>max)
            {
                max=counter[n];
            }

        }


    cout<<max<<endl;
    return 0;
}
