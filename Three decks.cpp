#include <iostream>
#include<bits/stdc++.h>
#include <string>
//#include <cctype>
#include <vector>
using namespace std;

#define fasterIO ios::sync_with_stdio(0); cin.tie(0);
 
int main() 
{   
    fasterIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r+",stdin);
    freopen("output.o","w+",stdout);
   #endif
//think before speaking   cin.ignore(); 

    int t;
    cin >> t;
    cin.ignore();
    while(t--) 
    {
        int a, b, c;
        cin >> a >> b >> c;
        long long  sum = a + b + c;
            
            if(sum % 3 == 0 ) 
        {
                long long K = sum / 3;
            if (c >= K && (K - a) + (K - b) == (c - K) && (K - a) >= 0 && (K - b) >= 0)
            {
                cout << "YES" << endl;
            } 
            else 
            {
                cout << "NO" << endl;
            }
        }
            else 
            {
                cout << "NO" << endl;
            }
            
        
    } 
        
   
    return 0;
}

