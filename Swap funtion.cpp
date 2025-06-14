#include <iostream>
#include<bits/stdc++.h>
// #include <cstring>
// //#include <cctype>
// #include <vector>
// #include <algorithm>
// #include<stdlib.h>
using namespace std;


void swap(int &a, int &b)  
{
    int temp = a;
    a = b;
    b = temp;
    cout << a << " " << b;
}


int main() 
{   
   
    int x,y;
    cin>>x>>y;
    swap(x,y);
return 0;
}

