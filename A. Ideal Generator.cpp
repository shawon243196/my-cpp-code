#include <iostream>
using namespace std;
#define fasterIO ios::sync_with_stdio(0); cin.tie(0);
 
int main() {
fasterIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r+",stdin);
    freopen("output.o","w+",stdout);
   #endif
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        if (k % 2 == 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
