#include <iostream>
#include <vector>

using namespace std;
#define ll long long

int main() {
    int n;
    cin >> n;

    vector<ll> results;

    for (int k = 1; k <= n; ++k) {
        ll ways = (ll)k * k * (k * k - 1) / 2 - 4 * (k - 1) * (k - 2);
        results.push_back(ways);
    }

    for (size_t i = 0; i < results.size(); ++i) {
        cout << results[i]<<endl;
    }
    return 0;
}
