#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

#define fasterIO ios::sync_with_stdio(0); cin.tie(0);

void computeAverage(const vector<double>& arr, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    double average = sum / n;
    cout << fixed << setprecision(6) << average;
}

int main() {
    fasterIO
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;
    vector<double> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    computeAverage(arr, n);

    return 0;
}
