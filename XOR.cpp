#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define fasterIO ios::sync_with_stdio(0); cin.tie(0);


    // // using transform() function and ::toupper in STL
    // transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
 
    // // using transform() function and ::tolower in STL
    // transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
//typedef long long int ll;

// c=(a%b+b)%b;

int main() 
{   
    fasterIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r+",stdin);
    freopen("output.txt","w+",stdout);
   #endif
long long a,b,q;
cin>>a>>b>>q;
if(q==1)
{
    cout<<a<<endl;

}
else if(q==2)
{
    cout<<b<<endl;
}
 else {
        long long remainder = q % 3;
        if (remainder == 0) {
            cout << (a ^ b) << endl;
        } else if (remainder == 1) {
            cout << a << endl;
        } else {
            cout << b << endl;
        }
    }
return 0;
} 

