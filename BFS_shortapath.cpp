//Bismillahir Rahmanir Raheem

#include <bits/stdc++.h>
#include<iostream>
using namespace std;

//BFS
void solve()
{
    int n,e;
    cin>>n>>e;
    vector<vector<int>>adj(n+1);
    vector<int>par(n+1,-1);
    for(int i=0;i<e;i++)
    {
      int u,v;
      cin>>u>>v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }
    int s;cin>>s;
    vector<int>level(n+1,-1);
    level[s]=0;
    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
      int u=q.front();
      q.pop();
      for(int v : adj[u])
      {
            if(level[v]== -1)
            {
                  level[v]=level[u]+1;
                  par[v]=u;
                  q.push(v);
            }

      }
    }
    for(int i=1;i<=n;i++)
    {
      cout<<level[i]<<" ";
    }
    // for(int i=1;i<=n;i++)
    // {
    //   cout<<i<<":"<<par[i]<<endl;
    // }
    int u,v;
    cin>>v;
    // v---par[v]
    // v=3,par[3]=2;
    // v=2,par[2]=1;
    // v=1,par[1]=6;
    vector<int>path;
    path.push_back(v);
    while(par[v]!=-1)
    {
      path.push_back(par[v]);
      v=par[v];
    }
    for(auto i: path)
    {
      cout<<i<<"->";

    }

}

int main() 
{
      solve();
    return 0;
}




