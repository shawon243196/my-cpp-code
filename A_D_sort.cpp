#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void  swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
vector<int>dsort(vector<int>&a)
{
    for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
  if(a[i]<a[j]){
    swap(a[i],a[j]);
    }
  }
}
return a;
}
vector<int>a_sort(vector<int>&a)
{
    for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
  if(a[i]>a[j]){
    swap(a[i],a[j]);
    }
  }
}
return a;
}
int main() {

vector<int>v;
for(auto i=0;i<5;i++)
{
    int x;
    cin>>x;
    v.push_back(x);
}
//dsort(v);
a_sort(v);
for(auto i:v)
{
    cout<<i<<endl;
}
    return 0;
}
