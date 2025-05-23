#include <iostream>
#include<bits/stdc++.h>
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
    int t;
    cin>>t;
    while(t--)
    {
char ch;
cin>>ch;
if(ch=='c'||ch=='o'||ch=='d'||ch=='e'||ch=='f'||ch=='o'||ch=='r'||ch=='c'||ch=='e'||ch=='s')
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}
}


return 0;

}
