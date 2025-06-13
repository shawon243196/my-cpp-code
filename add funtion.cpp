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

// c=(a%b+b)%b;
void add(int a,int b)
{
    long long sum=a+b;
    cout<<sum<<endl;
}

int main() 
{   
    fasterIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r+",stdin);
    freopen("output.o","w+",stdout);
   #endif
int x,y;
cin>>x>>y;
add(x,y);
    return 0;
}

