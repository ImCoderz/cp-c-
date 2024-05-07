#include <bits/stdc++.h>
using namespace std;

string frequencySort(string s) {

    unordered_map<char, int> freqMap;
    for (char c : s) {
        freqMap[c]++;
    }

    auto comparator = [&](char a, char b) {
        if (freqMap[a] != freqMap[b]) {
            return freqMap[a] > freqMap[b]; 
        } else {
            return a < b; 
        }
    };

    sort(s.begin(), s.end(), comparator);

    return s;
}

int main() {
    string s;
    cin>>s;
    string sortedString = frequencySort(s);
    cout << sortedString << endl;
    return 0;
}
