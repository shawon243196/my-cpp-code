//Bismillahir Rahmanir Raheem

#include <bits/stdc++.h>
#include<iostream>
using namespace std;

// dp 4 LIS 

int n,m;
int arr[100];
int dp[100];

//o(n*n)

int f(int i)
{
    if(i==n)return 0;

    int &ret=dp[i];
    if(ret!=-1)return ret;
     
    int mx=0;
    for(int j=i+1;j<n;j++)
    {
        if(arr[j]>arr[i])
        {
        mx=max(mx,f(j));
        }
    }
    return ret=mx+1;

}

void solve()
{
    memset(dp,-1,sizeof(dp));
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //f(0)----f(1)---f(2)...f(n) one at a time.
    int ans=-1;
    for(int j=0;j<n;j++)
    {
        ans=max(ans,f(j));
    }
    cout<<ans<<endl;
}


int main() 
{
      solve();
    return 0;
}

// 5
// 4 10 3 4 6
// ans=3


