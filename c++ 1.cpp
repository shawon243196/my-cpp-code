#include <iostream>
#include<iomanip>
#include<cstring>
#include <climits>
#include <vector>
#include<bits/stdc++.h>
#include<conio.h>
#include <cstdio>
#include<stdio.h>
#include <algorithm>
using namespace std;

#define fasterIO ios::sync_with_stdio(0); cin.tie(0);


int main()
{
    fasterIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r+",stdin);
    freopen("output.o","w+",stdout);
    #endif
    char ch1[1000];
    char ch2[1000];
    //fgets(ch1,sizeof(ch1),stdin);
    gets(ch1);
    int i=0,len=0,j;
    while(ch1[i]!='\0')
    {
        len++;
        i++;
    }
    // for(int a = 0;a<=len;a++)
    // {
    //     tolower(ch1[a]);
    // }
    //ch2 = strrev(ch1);
    for(j = 0,i=len-1;i>= 0;i--,j++)
    {
        ch2[j]=ch1[i];
    }
    ch2[j]='\0';
    int d = strcmp(ch1,ch2);
    //cout<<d<<endl;
    if(d == 0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    //cout<<ch1<<endl;
    return 0;
}
