#include <iostream>
#include<bits/stdc++.h>
#include <string>
//#include <cctype>
using namespace std;

#define fasterIO ios::sync_with_stdio(0); cin.tie(0);

int main()
{
    fasterIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r+",stdin);
    freopen("output.o","w+",stdout);
    #endif

string str;
getline(cin,str);
for(int i=0;str[i]!=0;i++)
{
    if(str[i]=='\\')
    {
         break;
    }
    else
    cout<<str[i];

}
    return 0;
}

