#include <iostream>
#include <cmath>

using namespace std;


int main()

{
    int sum=2;
    int flag=0;
    for (int i=3;i<=(2000000);i=i+2)
    {
            flag=0;
        for(int j=3;j<sqrt(i);j=j+2)
        {
            if(i%j==0)
            {
                flag++;
                break;
            }

        }
        if(flag==0){
        sum=sum+i;}

    }
    cout<<sum;
}
