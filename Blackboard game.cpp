#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define fasterIO ios::sync_with_stdio(0); cin.tie(0);


    // // using transform() function and ::toupper in STL
    // transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
 
    // // using transform() function and ::tolower in STL
    // transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

// c=(a%b+b)%b;

int main() 
{   
    fasterIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r+",stdin);
    freopen("output.txt","w+",stdout);
   #endif
  int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 4 == 0) {
            cout << "Bob\n";
        } else {
            cout << "Alice\n";
        }
    }
return 0;
} 

