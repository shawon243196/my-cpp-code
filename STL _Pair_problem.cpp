#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool compnum(pair<string,pair<int,int>>a,pair<string,pair<int,int>>b)
{
return a.second.second<b.second.second;
}
bool compid(pair<string,pair<int,int>>a,pair<string,pair<int,int>>b)
{
return a.second.first<b.second.first;
}
int main() {
vector<pair<string,pair<int,int>>>v;
int n;cin>>n;
for(int i=0;i<n;i++)
{
    string name;
    int id,num;
    cout<<"ente name id num"<<endl;
    cin>>name>>id>>num;
    //v.push_back({ch,{id,num}});
    v.push_back(make_pair(name,make_pair(id,num)));
}
sort(v.begin(),v.end(),compid);

cout<<"name id num "<<endl;
for(auto i:v)
{
    cout<<i.first<<" : "<<i.second.first<<" : "<<i.second.second<<endl;
}
    return 0;
}
