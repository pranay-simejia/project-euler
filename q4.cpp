#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;


/*string rev(string s)
{
    string rev,s1;
    s1=s;
    for(int i=0;i<s1.length();i++)

    {
        rev.at(i)=s1.at(s1.length()-i-1);
    }

    return rev;
}*/



int main(){

int i;
int j;
long long largest_pal=1;
string str;


for(i=100;i<=999;i++)
{
    for(j=100;j<=999;j++)
    {

        str = to_string(i*j);

       if(((str[0]+str[1]+str[2]+str[3]+str[4]+str[5])==(str[5]+str[4]+str[3]+str[2]+str[1]+str[0]))&&((i*j)>largest_pal))
           {
               largest_pal=i*j;
           }

    }



}
    cout<<largest_pal;
return 0;

}


