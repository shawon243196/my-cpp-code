#include <iostream>
#include<iomanip>
#include <climits>
#include <vector>
#include<bits/stdc++.h>
#include<conio.h>
#include <cstdio>
#include<stdio.h>
#include <algorithm>
#include <iostream>
#include <cstring>
using namespace std;

#define fasterIO ios::sync_with_stdio(0); cin.tie(0);


int main()
{
      char ch[10];
    int i,upper,lower,digit;

    gets(ch);
    i=upper=lower=digit=0;
    for(i=0;i<strlen(ch);i++)
    {
        if(ch[i]>= 65 && ch[i]<=90 )
            upper++;
        else if(ch[i]>= 97 && ch[i]<=122 )
            lower++;
        else if (ch[i]>= 48 && ch[i]<= 57 )
            digit++;
    }
    cout<<upper<<endl<<lower<<endl<<digit<<endl;
    return 0;
}
