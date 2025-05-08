#include <iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;

#define fasterIO ios::sync_with_stdio(0); cin.tie(0);

int main()
{
    fasterIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r+",stdin);
    freopen("output.o","w+",stdout);
    #endif
   int a,b,sum=0;
   cin>>a>>b;
   sum= a+(b/2);
   cout<<sum<<endl;
    return 0;
}
