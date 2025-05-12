#include <iostream>
//#include<bits/stdc++.h>
#include <string>
//#include <cctype>
#include <vector>
using namespace std;

int main()
{
int t;
cin>>t;
cin.ignore();
while(t--)
{
    string str;
getline(cin,str);
cout<< str[0];
    for(int i=0;i<str[i]!='\0';i++)
    {

      if(str[i] == ' ')
      {
        cout<<str[i+1];
      }
    }
    cout<<endl;

}
    return 0;
}
