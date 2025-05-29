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
//think before speaking   ;
 int n;
 cin>>n;
 cin.ignore();
 char ch[n];

 cin>>ch;
 int cnt=0;
 for(int i=0;i<n;i++)
 {

        if(ch[i]!=ch[i+1])
        {
            cnt++;
        }


 }
 cout<<cnt<<endl;
return 0;

}
