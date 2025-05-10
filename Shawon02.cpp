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
    int n;
    cin>>n;
    while(n--){
string str;
cin>>str;
int a=str.size();
if(a>10)
{
 cout<<str[0]<<a-2<<str[a-1]<<endl;

}
else
cout<<str<<endl;
}
    return 0;
}
