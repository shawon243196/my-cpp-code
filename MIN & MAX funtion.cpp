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
int max(int arr[],int size)
{
    int max=arr[0];
    for(int i=0;i<size;i++)
    {
      if(arr[i]>max)
      {
        max=arr[i];
      }
    }
    return max;
}
int min(int arr[],int size)
{
    int min=arr[0];
    for(int i=0;i<size;i++)
    {
      if(arr[i]<min)
      {
        min=arr[i];
      }
    }
    return min;
}


int main() 
{   
    fasterIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r+",stdin);
    freopen("output.o","w+",stdout);
   #endif
 int n;
 cin>>n;
 int number[n];
 for(int i=0;i<n;i++)
 {
    cin>>number[i];
 }
 cout<<min(number,n)<<" "<<max(number,n);

return 0;
}

