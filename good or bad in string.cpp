#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    while (n--) {
        string str;
        getline(cin, str);
        bool good = false;
        for (int j = 0; j + 2 < str.size(); ++j) {
            if ((str[j] == '0' && str[j+1] == '1' && str[j+2] == '0') ||
                (str[j] == '1' && str[j+1] == '0' && str[j+2] == '1')) {
                good = true;
                break;
            }
        }
        cout << (good ? "Good" : "Bad") << endl;
    }

    return 0;
}
