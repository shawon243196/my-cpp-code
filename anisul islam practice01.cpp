
//#include<bits/stdc++.h>
#include <iostream>
#include <cstring>
#include<conio.h>
using namespace std;

#define fasterIO ios::sync_with_stdio(0); cin.tie(0);


int main()
{
        char ch[10];
    int i,vouwl,consunant,digit,word,other;
    //cout<<"enter the string"<<endl;
    gets(ch);
    i=vouwl=consunant=digit=other=word=0;
    for(i=0;i<strlen(ch);i++)
    {
        if((ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')||
            (ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U'))
            vouwl++;
        else if((ch[i]>='a'&&ch[i]<='z')||(ch[i]>= 'A' && ch[i]<= 'Z' ))
            consunant++;
        else if(ch[i]>= '0' && ch[i]<= '9')
            digit++;
        else if(ch[i]==' ')
        word++;
        else
        other++;
    }
    cout<<vouwl<<endl<<consunant<<endl<<digit<<endl<<word<<endl<<other<<endl;
 getch();
}

