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
string ch;
cin>>ch;
string t="hello";
bool it=false;
int cnt=0;
for(int i=0;i<ch.size();i++)
{
    if(ch[i] == t[cnt])
    {
        cnt++;
    }
}
if(cnt==t.size())
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}
return 0;

}
