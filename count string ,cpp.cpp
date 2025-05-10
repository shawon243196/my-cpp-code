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
cin>>str;
int sum = 0;
for(int i=0;str[i]!=0;i++)
    {
        sum+=str[i]-'0';
    }
cout<<sum<<endl;
    return 0;
}

