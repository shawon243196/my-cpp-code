#include <iostream>
#include<iomanip>
#include<string.h>
#include <climits>
#include <vector>
#include<bits/stdc++.h>
using namespace std;


int main()
{


int n;
cin>>n;
int f=0;
vector<int>v(n);
for(int i=0;i<n;i++)
{
    cin>>v[i];
}
for(int i=0;i<n;i++)
{
    if(v[i]==1)
    {
       f=1;

    }

}
if(f==1){
cout<<"HARD"<<endl;
}
else{
    cout<<"EASY"<<endl;
}
return 0;
}
