#include <iostream>
#include<bits/stdc++.h>
#include <string>
//#include <cctype>
using namespace std;

#define fasterIO ios::sync_with_stdio(0); cin.tie(0);

int main()
{
    fasterIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r+",stdin);
    freopen("output.o","w+",stdout);
    #endif

    string X, Y;
    cin >> X >> Y;
    int a=X.size();
    int b=Y.size();
    string z=X+Y;
    //sort(z.begin(),z.end());
    cout<<a<<" "<<b<<endl;
    cout<<z<<endl;
    char temp;
    temp=X[0];
    X[0]=Y[0];
    Y[0]=temp;
    cout<<X<<" "<<Y<<endl;


    return 0;
}
