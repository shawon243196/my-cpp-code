#include <iostream>
#include<bits/stdc++.h>
// #include <cstring>
// //#include <cctype>
// #include <vector>
// #include <algorithm>
// #include<stdlib.h>
using namespace std;


void display(int n,char c)
{
    for(int i=0;i<n;i++)
    {
        cout<<c<<" ";
    }
}


int main() 
{   
  
    int t;cin>>t;
    while(t--)
    {
 int N;
 char c;
 cin>>N>>c;
 display(N,c);
 cout<<endl;
}

return 0;
}

