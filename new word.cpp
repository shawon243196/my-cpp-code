#include <iostream>
#include<bits/stdc++.h>
#include <cstring>
//#include <cctype>
#include <vector>
#include <algorithm>
using namespace std;



int main() 
{   
  

string ch;
getline(cin,ch);

transform(ch.begin(), ch.end(), ch.begin(), ::tolower);
 int e = 0, g = 0, y = 0, p = 0, t = 0;
for (char c : ch) {
        if (c == 'e') e++;
        else if (c == 'g') g++;
        else if (c == 'y') y++;
        else if (c == 'p') p++;
        else if (c == 't') t++;
    }
    int minCount = min({e, g, y, p, t});
cout<< minCount<<endl;   
return 0;
}

