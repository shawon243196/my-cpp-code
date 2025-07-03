#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define fasterIO ios::sync_with_stdio(0); cin.tie(0);


    // // using transform() function and ::toupper in STL
    // transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
 
    // // using transform() function and ::tolower in STL
    // transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
typedef long long int ll;

// c=(a%b+b)%b;
ll power(ll b,ll p)
{
    ll result=1;
    while(p)
    {
        if(p%2!=0)
        {
            result=(result*b)%10000000;
            p--;
        }
        else
        {
            b=(b*b)%100000000;
            p/=2;
            //b=(b*b)
        }
    }
    return result;
}
int main() 
{   
    fasterIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r+",stdin);
    freopen("output.txt","w+",stdout);
   #endif
    ll b=1378,p;
    cin>>p;
cout<<power(b,p)%10;

return 0;
} 

