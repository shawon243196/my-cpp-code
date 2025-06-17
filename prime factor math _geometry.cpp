#include <iostream>
#include<bits/stdc++.h>
// #include <cstring>
// //#include <cctype>
// #include <vector>
// #include <algorithm>
// #include<stdlib.h>
using namespace std;

#define fasterIO ios::sync_with_stdio(0); cin.tie(0);


    // // using transform() function and ::toupper in STL
    // transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
 
    // // using transform() function and ::tolower in STL
    // transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

// c=(a%b+b)%b;

int main() 
{   
    fasterIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r+",stdin);
    freopen("output.txt","w+",stdout);
   #endif
long long n;
cin>>n;
int flag=0;
 for(int i=2;i<=n/2;i++)
    {
        int sum=0;
        while( n%i == 0)
        {
              n =n/i;
              sum++;
        }
        if(sum>0 && flag > 0)
        {
            cout<<"*";
        }
              if(sum>0)
              {
                cout<<"("<<i<<"^"<<sum<<")";
                flag=1;
              }
              if(n==1)
              {
                //cout<<"*";
                break;
              }
        
    }
    if(n>1 && flag)
    {
        cout<<"*";
    }
     if(n>1)
              {
                cout<<"("<<n<<"^"<<1<<")";
            }


return 0;
}

