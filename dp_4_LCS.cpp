//Bismillahir Rahmanir Raheem

#include <bits/stdc++.h>
#include<iostream>
using namespace std;

// dp 4 lcs 
string a,b;
int n,m;
int dp[100][100];
int dr[100][100];
int f(int i,int j)
{
  if(i==n || j==m)
    return 0;

 int &ret=dp[i][j];
 if(ret!=-1)return ret;

  // int ret=0;

  if(a[i]==b[j])
  {
    ret=1+f(i+1,j+1);//1
    dr[i][j]=1;
  }
  else
   {
    // ret=max(f(i+1,j),f(i,j+1));
    int x=f(i+1,j);//2
    int y=f(i,j+1);//3
    if(x>y) 
        {
            ret = x;
            dr[i][j]=2;
        }
    else 
    {
        ret =y;
        dr[i][j]=3;
    }
  }
  return ret;
}
void p(int i,int j)
{
    if(i==n || j==m)return;
    if(dr[i][j]==1)
        {
            cout<<a[i];
            p(i+1,j+1);
        }
    else
    {
    if(dr[i][j]==2)
        {
            p(i+1,j);
        }
    else 
    {
        p(i,j+1);
    }
     }
}
void solve()
{
    memset(dp,-1,sizeof(dp));
    cin>>a>>b;
    n=a.size();
    m=b.size();
   cout<<f(0,0)<<endl;
   p(0,0);
}


int main() 
{
      solve();
    return 0;
}




