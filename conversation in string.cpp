#include <iostream>
#include<bits/stdc++.h>
#include <string>
//#include <cctype>
using namespace std;
int main()
{

//Enjoy the summer;
string str;
getline(cin,str);
for(int i=0;str[i]!=0;i++)
{
    if(str[i]>='A' && str[i]<='Z')
    {
        str[i]=str[i]+32;
    }
    else if(str[i]>='a' && str[i]<='z')
    {
        str[i]=str[i]-32;
    }
    else if(str[i]==',')
    {
        str[i]=' ';
    }

}
 cout<<str;
    return 0;
}

