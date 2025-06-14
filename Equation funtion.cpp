#include <iostream>
#include<bits/stdc++.h>
// #include <cstring>
// //#include <cctype>
// #include <vector>
// #include <algorithm>
// #include<stdlib.h>
using namespace std;

#define fasterIO ios::sync_with_stdio(0); cin.tie(0);


    // // using transform() function and ::toupper in STL
    // transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
 
    // // using transform() function and ::tolower in STL
    // transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

// c=(a%b+b)%b;
double ressult(int &a,int &b)
{
   double result=0;
   for(int i=2;i<=b;i+=2)
    {
       result+=pow(a,i); 
    } 
    return result; 
}


int main() 
{   
    fasterIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r+",stdin);
    freopen("output.o","w+",stdout);
   #endif
    int x,n;
    cin>>x>>n;
 if(n < 2) 
 {
    cout << 0;
 }
else
{
cout<<(long long )ressult(x,n);
}
return 0;
}

