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
void swaparry1(int arr[][500],int n,int x,int y)
{
    for(int i=0;i<n;i++)
        {
        int temp=arr[x][i];
        arr[x][i]=arr[y][i];
        arr[y][i]=temp;

       
        }
}
void swaparry2(int arr[][500],int n,int x,int y)
{
     for(int i=0;i<n;i++){
  int temp2=arr[i][x];
        arr[i][x]=arr[i][y];
        arr[i][y]=temp2;
    }
}
void printArray(int arr[][500], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            //cin>>arr[i][j];
            cout<<arr[i][j]<<" ";

        }
        cout<<endl;
    }
    cout<<endl;
}

int main() 
{   
    fasterIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r+",stdin);
    freopen("output.txt","w+",stdout);
   #endif

int n,x,y;
cin>>n>>x>>y;
int arr[500][500];
 for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];

            
        }
    }
 
 //printArray(arr,n);
 swaparry1(arr,n,x-1,y-1);
 swaparry2(arr,n,x-1,y-1);
 printArray(arr,n);

      
    return 0;
} 

