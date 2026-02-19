#include<bits/stdc++.h>
using namespace std;
bool comp(pair<string,pair<int,int>>a,pair<string,pair<int,int>>b)
{
    if(a.second.second==b.second.second)
    {
        return a.second.first<b.second.first;
    }
    return a.second.second>b.second.second;
}
int main()
{
    vector<pair<string,pair<int,int>>>v; 
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
         string name;
         int id,num;
         cin>>name>>id>>num;
         v.push_back(make_pair(name,make_pair(id,num)));
    }
    sort(v.begin(),v.end(),comp);
    for(auto i:v)cout<<i.first<<" "<<i.second.first<<" "<<i.second.second<<endl;
    return 0;
}
