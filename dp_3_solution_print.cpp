//Bismillahir Rahmanir Raheem

#include <bits/stdc++.h>
#include<iostream>
using namespace std;

// dp 3 solution print

//..#....#...##
//5
// 0 3 6 8 10 13

int dp[100];
int dr[100];
string ch;
int n;
int f(int i)
{
       if(i>=n)return 0;
        if(dp[i]!=-1)return dp[i];
       int x=1e8,y=1e8;

      if(ch[i+2]!='#')
        {
           x = f(i+2) + 1;  //1
        }
       if(ch[i+3]!='#')
       {
           y = f(i+3) + 1;  //2
       }
      
       if(x<y)
       {
        
        dp[i]=x;
        dr[i]=1;
       }
       else 
       {
       dp[i]=y;
       dr[i]=2;
       }
       return dp[i];
}
void g(int i)
{
     cout<<i<<" ";
    if(i>=n)return;
   
    if(dr[i]==1)
    {
        g(i+2);
    }
    if(dr[i]==2)
    {
        g(i+3);
    }

}
int main() 
{
    memset(dp,-1,sizeof(dp));
 cin>> ch;
 n=ch.size();
 ch+="__";
 cout<<f(0)<<endl;
 g(0);
    return 0;
}




