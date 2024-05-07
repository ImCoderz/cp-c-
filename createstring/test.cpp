#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    string str;
    cin >> str;

    vector<string> permutations;
    sort(str.begin(), str.end());

    do {
        permutations.push_back(str);
    } while (next_permutation(str.begin(), str.end()));

    sort(permutations.begin(), permutations.end());

    cout << permutations.size() << endl;
    for (const string& perm : permutations) {
        cout << perm << endl;
    }

    return 0;
}
