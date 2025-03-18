#include <iostream>
#include<iomanip>
#include<string.h>
#include <climits>
#include <vector>
#include<bits/stdc++.h>
using namespace std;


int main()
{


int n,h;
cin>>n>>h;
int sum=0;
vector<int>v(n);
for(int i=0;i<n;i++)
{
    cin>>v[i];
}
for(int i=0;i<n;i++)
{
    if(v[i]>h)
    {
        sum=sum+2;

    }
    else
    {
        sum=sum+1;
    }
}
cout<<sum<<endl;
return 0;
}
