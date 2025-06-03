#include <iostream>
#include<bits/stdc++.h>
#include <cstring>
//#include <cctype>
#include <vector>
#include <algorithm>
using namespace std;

#define fasterIO ios::sync_with_stdio(0); cin.tie(0);


    // // using transform() function and ::toupper in STL
    // transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
 
    // // using transform() function and ::tolower in STL
    // transform(s2.begin(), s2.end(), s2.begin(), ::tolower);



int main() 
{   
    fasterIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r+",stdin);
    freopen("output.o","w+",stdout);
   #endif
//think before speaking   cin.ignore(); 
int t;
cin>>t;
while(t--){
int n,x,sum=0;
cin>>n>>x;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
    sum+=arr[i];
}
double avg = sum/(double)n;
if(avg==x)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}
}
return 0;
}

