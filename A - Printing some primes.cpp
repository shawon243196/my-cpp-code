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

vector<int> primes;
vector<bool> check(100000000, false);

void sieve(int n) {
    check[0] = true;
    check[1] = true;
    for (int i = 2; i * i <= n; i++)
     {
        if (!check[i])
         {
            for (int j = i * i; j <= n; j += i) 
            {
                check[j] = true;
            }
        }
    }

    for (int i = 0; i <= n; i++)
     {
        if (!check[i])
        {
         primes.push_back(i);
        }
    }
}


int main() 
{   
    fasterIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r+",stdin);
    freopen("output.txt","w+",stdout);
   #endif
   
   //sieve(100000000-1);
    //sieve(10000);
   // for(int i=0;i<primes.size();i++)
   // {
   //  cout<< primes[i]<<endl;
   // }
       sieve(100000000 - 1);

    for (int i = 0; i < primes.size(); i++) 
    {
        if (i % 100 == 0) {
            cout << primes[i] <<endl;
        }
    }



    // int t;
    // int n,j,k;
    // cin>>n>>j>>k;
    // int max=0,x;
    // int arr[n];
    // for(int i=1;i<=n;i++)
    // {
    //     cin>>arr[i];
    // }
    // for(int i=1;i<=n;i++){
    //     if(arr[i]>max)
    //     {
    //         arr[i]=max;
    //     }
    // }
    // if(max  ==  arr [j] || max == arr[k])
    // {
    //     cout<<"yes"<<endl;
      
    // }
    // else{
    //     cout<<"no"<<endl;
    // }


 

    return 0;
}

