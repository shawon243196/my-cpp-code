#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define fasterIO ios::sync_with_stdio(0); cin.tie(0);


    // // using transform() function and ::toupper in STL
    // transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
 
    // // using transform() function and ::tolower in STL
    // transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
typedef long long int ll;

// c=(a%b+b)%b;

int main() 
{   
    fasterIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r+",stdin);
    freopen("output.txt","w+",stdout);
   #endif
ll n;
cin>>n;
// ll res=0,i=1,cnt=0;
// while(res <= n)
// {
//     i++;
//     res+=i;
//     cnt++;
// }
// cout<<cnt<<endl;
ll k=sqrt(1+8*n)-1;
k/=2;
cout<<k<<endl;
return 0;
} 

