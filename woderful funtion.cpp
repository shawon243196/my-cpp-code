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

// void palindrom(int x)
// {

// int y=0,r;int n=x;
// while(x>0)
//   {
//    r=x%10;
//    y=y*10+r;
//    x=x/10;
//   }
// if(n==y) {cout<<"YES"<<endl; }
// else {cout<<"NO"<<endl; }
// }
// int binaryrepresentation(int n)
// {
    
//     int binarynumber= 0,remainder,i=1;
//    while(n!=0)
//     {
//         remainder = n % 2;
//         n = n / 2;
//         binarynumber = binarynumber+remainder * i;
//         i=i*10;
//     }

//     return binarynumber;
// }
bool isbinarypalindrom(int n)
{
    string binary="";
    if(n==0){binary='0';}
     while(n!=0){binary+=(n%2)+'0';
     n/=2;
 }
 string reversed_binary = binary;
    reverse(reversed_binary.begin(), reversed_binary.end());
    
    return binary == reversed_binary;
}
bool iswoderful(int n){
    return(n%2!=0)&&isbinarypalindrom(n);
}
int main() 
{   
    fasterIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r+",stdin);
    freopen("output.o","w+",stdout);
   #endif
// int x;
// cin>>x;
// int y = binaryrepresentation(x);
// palindrom(y);
    int N;
    cin>>N;
    if(iswoderful(N))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
return 0;
}

