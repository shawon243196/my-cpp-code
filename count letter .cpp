#include <iostream>
//#include<bits/stdc++.h>
#include <string>
//#include <cctype>
#include <vector>
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
   // int cnt=0;
for(int i='a';i<='z';i++)
{
    int cnt=0;
for(int j=0;j<str.size();j++)
{
    if(str[j]==i)
    {
        cnt++;

    }

}
if(cnt>0)cout<<(char)i<<" : "<<cnt<<endl;
}

 return 0;
}
