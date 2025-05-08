#include <iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;

#define fasterIO ios::sync_with_stdio(0); cin.tie(0);


int extreamlyround(int x)
{
    int count=0;
    for(int n=1;n<=9;n++)
    {
        int num = n;
        while(num<=x)
        {
            count++;
            num*=10;
        }
    }
    return count;
}

int main()
{
    fasterIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r+",stdin);
    freopen("output.o","w+",stdout);
    #endif
  int n;
  cin>>n;
  while(n--)
  {
    int num;
    cin>>num;
    cout<<extreamlyround(num)<<endl;
  }
    return 0;
}
