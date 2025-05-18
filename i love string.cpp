#include <iostream>
#include <string>
using namespace std;

#define fasterIO ios::sync_with_stdio(0); cin.tie(0);

int main()
{
    fasterIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.o","w",stdout);
    #endif

    int t;
    cin >> t;
    while(t--)
    {
        string ch, ch1;
        cin >> ch >> ch1;
        int a = ch.size();
        int b = ch1.size();
        int max_len = max(a, b);

        for(int i = 0; i < max_len; i++)
        {
            if(i < a) cout << ch[i];
            if(i < b) cout << ch1[i];
        }
        cout << endl;
    }
    return 0;
}
